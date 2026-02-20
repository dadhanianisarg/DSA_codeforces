#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    int ans = 0;
    int lastNo = n % 10;
    int x = 1;
    while (lastNo > x)
    {
        ans += 10;
        x++;
    }
    int xx = 1;
    while (n)
    {
        ans += xx;
        xx++;
        n /= 10;
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
        int n;
        cin >> n;
        int ans = solve(n);
        cout << ans << endl;
    }

    return 0;
}