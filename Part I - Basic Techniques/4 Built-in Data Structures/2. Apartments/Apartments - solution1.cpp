/**
Author: Ahmed Gamal - bravewarrior0
Link: https://cses.fi/problemset/task/1084
code time: 0.10 s
**/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, k, ans = 0;
    cin >> n >> m >> k;
    int a[n], b[m];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> b[i];
    }
    sort(a, a+n);
    sort(b, b+m);
    int i = 0, j = 0;
    while(i < n && j < m)
    {
        if(b[j] >= a[i]-k && b[j]<= a[i]+k)
        {
            ++ans;
            ++i;
            ++j;
        }
        else
        {
            if(a[i] < b[j])
                ++i;
            else
                ++j;
        }
    }
    cout << ans << "\n";
    return 0;
}
