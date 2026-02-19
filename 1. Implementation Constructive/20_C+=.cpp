#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b, int n)
{
    int ans = 0;
    while (a <= n && b <= n)
    {
        ans++;
        if (a < b)
            a += b;
        else
            b += a;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        int ans = solve(a, b, n);
        cout << ans << "\n";
    }

    return 0;
}