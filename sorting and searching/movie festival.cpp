#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> data;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        data.push_back(make_pair(b, a));
    }
    sort(data.begin(), data.end());
    int sum = 1;
    int t = data[0].first;
    for (int i = 1; i < n; i++)
    {
        if (data[i].second >= t)
        {
            t = data[i].first;
            sum++;
        }
    }
    cout << sum;
}