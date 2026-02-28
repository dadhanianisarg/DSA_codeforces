#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i] / 2;
        if (a[i] < 0 && a[i] % 2 != 0)
            b[i]--;

        sum += b[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0 && sum < 0)
        {
            b[i]++;
            sum++;
        }
        if (sum == 0)
            break;
    }

    for (int i = 0; i < n; i++)
        cout << b[i] << "\n";

    return 0;
}