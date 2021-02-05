/**
Author: Ahmed Gamal - bravewarrior0
Link: https://cses.fi/problemset/task/1621
code time: 0.15 s
**/
#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    set<int> distinct_numbers;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        distinct_numbers.insert(x);
    }
    cout << distinct_numbers.size() << "\n";
    return 0;
}
