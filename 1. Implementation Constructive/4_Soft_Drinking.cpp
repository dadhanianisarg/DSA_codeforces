#include <bits/stdc++.h>
using namespace std;

int solve(int n, int k, int l, int c, int d, int p, int nl, int np)
{
    int drinkToasts = (k * l) / nl;
    int limeToasts = c * d;
    int saltToasts = p / np;

    return min({drinkToasts, limeToasts, saltToasts}) / n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    cout << solve(n, k, l, c, d, p, nl, np) << endl;

    return 0;
}
