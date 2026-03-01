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
        int n, x;
        cin >> n >> x;
        int ans = 1;
        int no = 2;
        while (no < n)
        {
            ans++;
            no += x;
        }
        cout << ans << "\n";
    }
    return 0;
}