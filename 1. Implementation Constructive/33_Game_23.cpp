#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, m;
    cin >> n >> m;
    if (m % n != 0)
    {
        cout << -1 << endl;
        return 0;
    }
    long long divisor = m / n;
    long long ans = 0;
    while (divisor)
    {
        if (divisor % 3 == 0)
        {
            ans++;
            divisor /= 3;
        }
        else
            break;
    }
    while (divisor)
    {
        if (divisor % 2 == 0)
        {
            ans++;
            divisor /= 2;
        }
        else
            break;
    }
    if (divisor != 1)
    {
        cout << -1 << endl;
        return 0;
    }
    cout << ans << endl;
    return 0;
}