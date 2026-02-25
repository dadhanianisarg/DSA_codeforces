#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    if (m > n)
    {
        cout << -1 << endl;
        return 0;
    }
    int ans = 0;
    if (n % 2 == 0)
    {
        ans = n / 2;
    }
    else
    {
        ans = n / 2 + 1;
    }
    while (ans % m != 0)
    {
        ans++;
    }

    cout << ans << endl;
    return 0;
}