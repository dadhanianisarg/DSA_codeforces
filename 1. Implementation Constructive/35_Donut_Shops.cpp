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
        long long a, b, c;
        cin >> a >> b >> c;

        if (a < c)
            cout << 1 << " ";
        else
            cout << -1 << " ";

        if (c < a * b)
            cout << b << "\n";
        else
            cout << -1 << "\n";
    }

    return 0;
}