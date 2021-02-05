/**
Author: Ahmed Gamal - bravewarrior0
Link: https://cses.fi/problemset/task/1091
code time: 0.32 s
**/
#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, x, t;
    cin >> n >> m;
    map<int,int> h;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        h[x]++;
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> t;
        if(h.size() == 0)
        {
            cout << -1 <<"\n";
            continue;
        }
        auto it = h.lower_bound(t);
        if(it == h.begin())
        {
            if(it->first > t)
            {
                cout << -1 <<"\n";
                continue;
            }
        }
        else if(it == h.end())
        {
            --it;
        }
        else if(it-> first > t)
        {
            --it;
        }
        cout << it->first <<"\n";
        --it->second;
        if(it->second <= 0)
            h.erase(it);

    }
    return 0;
}
