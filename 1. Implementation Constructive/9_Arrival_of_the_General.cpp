#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr)
{
    int n = arr.size();
    int maxi = arr[0], mini = arr[0];
    int miniEle = 0;
    for (int i = 1; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
        if (arr[i] <= mini)
        {
            mini = arr[i];
            miniEle = i;
        }
    }
    int ans = 0;
    for (int i = miniEle + 1; i < n; i++)
    {
        ans++;
        swap(arr[i], arr[i - 1]);
    }
    int maxiEle = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == maxi)
        {
            maxiEle = i;
            break;
        }
    }
    for (int i = maxiEle - 1; i >= 0; i--)
    {
        ans++;
        swap(arr[i], arr[i + 1]);
    }

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = solve(arr);
    cout << ans << "\n";
    return 0;
}