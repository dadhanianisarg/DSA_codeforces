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
        string s;
        cin >> s;
        long long ans = n;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                ans = max(ans, 2LL * (i + 1));
                ans = max(ans, 2LL * (n - i));
            }
        }

        cout << ans << "\n";
    }
    return 0;
}