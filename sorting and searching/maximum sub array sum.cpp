#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long arr[n];
    for (long long i = 0; i < n; i++) {
        cin>>arr[i];
    }
    long long sum = arr[0], best = arr[0];
    for (long long i = 1; i < n; i++) {
        sum = max(sum + arr[i], arr[i]);
        best = max(sum, best);
    }
    cout << best;
}