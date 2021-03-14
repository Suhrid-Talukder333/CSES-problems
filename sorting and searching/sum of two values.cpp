#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    cin >> a;
    vector<pair<int, int>> arr;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        arr.push_back(make_pair(b, i + 1));
    }
    sort(arr.begin(), arr.end());
    for (int i = 0, j = n - 1; i != j;)
    {
        if (arr[i].first + arr[j].first == a)
        {
            cout << arr[i].second << " " << arr[j].second;
            return 0;
        }
        else if (arr[i].first + arr[j].first > a)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout << "IMPOSSIBLE";
}