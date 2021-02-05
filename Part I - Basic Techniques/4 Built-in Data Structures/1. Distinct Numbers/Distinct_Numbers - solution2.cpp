/**
Author: Ahmed Gamal - bravewarrior0
Link: https://cses.fi/problemset/task/1621
code time: 0.05 s
**/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, distinct_counts = 1;
    cin >> n;
    int numbers[n];
    for (int  i = 0; i < n; ++i)
    {
        cin >> numbers[i];
    }
    sort(numbers,numbers+n);
    for(int i = 1; i<n; i++)
    {
        if(numbers[i] != numbers[i-1])
            ++distinct_counts;
    }
    cout << distinct_counts <<"\n";
    return 0;
}
