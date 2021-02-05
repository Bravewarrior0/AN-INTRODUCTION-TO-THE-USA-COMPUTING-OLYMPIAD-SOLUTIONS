/**
Author: Ahmed Gamal - bravewarrior0
Link: https://cses.fi/problemset/task/1091
code time: 0.30 s
**/
#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, x, t;
    cin >> n >> m;
    multiset<int> h;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        h.insert(x);
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> t;
        if(h.size() == 0)
        {
            cout << -1 <<"\n";
            continue;
        }
        auto it = h.upper_bound(t);
        if(it == h.begin())
        {
           cout << -1 <<"\n";
        }
        else
        {
            --it;
            cout << *it<<"\n";
            h.erase(it);
        }
    }
    return 0;
}
