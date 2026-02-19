#include <bits/stdc++.h>
using namespace std;

int solve(const vector<int> &arr)
{
    int ans = 1;
    int cnt = 1;
    for (int i = 1; i < (int)arr.size(); i++)
    {
        if (arr[i] > arr[i - 1])
            cnt++;
        else
            cnt = 1;
        ans = max(ans, cnt);
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = solve(arr);
    cout << ans << "\n";

    return 0;
}