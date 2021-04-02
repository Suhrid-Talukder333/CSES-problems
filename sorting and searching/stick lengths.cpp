#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    long long a = n / 2;
    long long x = arr[a];
    long long ans = 0;
    for (long long i = 0; i < n; i++)
    {
        ans += abs(x - arr[i]);
    }
    cout << ans << endl;
}