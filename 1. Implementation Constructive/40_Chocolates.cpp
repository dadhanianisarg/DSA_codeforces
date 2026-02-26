#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    long long last = arr[n - 1];
    long long ans = last;
    for (int i = n - 2; i >= 0; i--)
    {
        last = min((long long)arr[i], last - 1);
        if (last <= 0)
            break;
        ans += last;
    }
    cout << ans;
    return 0;
}