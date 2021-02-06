/**
Author: Ahmed Gamal - bravewarrior0
Link: https://cses.fi/problemset/task/1163
code time: 0.68 s
**/
#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long x, p;
    int n;
    cin >> x >> n;
    set<long long> poles;
    poles.insert(0);
    poles.insert(x);
    multiset<long long> passes;
    passes.insert(x);
    for(int i = 0; i < n; i++)
    {
        cin >> p;
        auto it = poles.upper_bound(p);
        auto it2 = prev(it,1);
        passes.erase(passes.find(*it - *it2));
        poles.insert(p);
        passes.insert(*it - p);
        passes.insert(p - *it2);

        cout << *prev(passes.end(),1) <<" ";
    }
    cout <<"\n";
    return 0;
}
