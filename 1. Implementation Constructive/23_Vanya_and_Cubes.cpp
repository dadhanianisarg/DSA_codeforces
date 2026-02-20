#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int height = 0;
    int sum = 0;
    int cnt = 0;
    while (sum <= n)
    {
        height++;
        cnt += height;
        sum += cnt;
    }

    cout << height - 1 << "\n";

    return 0;
}