#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, y;
    cin >> n >> x >> y;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = max(0, i - x); j < i; j++)
        {
            if (arr[j] <= arr[i])
            {
                flag = false;
                break;
            }
        }
        for (int j = i + 1; j <= min(n - 1, i + y) && flag; j++)
        {
            if (arr[j] <= arr[i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << i + 1;
            break;
        }
    }
    return 0;
}