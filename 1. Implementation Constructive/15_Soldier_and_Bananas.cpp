#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k, n, w;
    cin >> k >> n >> w;
    int totalCost = k * (w * (w + 1)) / 2;
    int amtBorrowed = max(0, totalCost - n);
    cout << amtBorrowed << "\n";
    return 0;
}