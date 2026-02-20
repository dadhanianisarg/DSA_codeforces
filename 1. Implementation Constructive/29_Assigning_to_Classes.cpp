#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int ans = 0;
        int med1st = arr[n - 1];
        int med2nd = arr[n];
        cout << med2nd - med1st << "\n";
    }
    return 0;
}