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
        int n;
        cin >> n;

        string s;
        cin >> s;

        int l = 0, r = n - 1;
        bool ok = true;
        while (l < r)
        {
            int diff = abs(s[l] - s[r]);
            if (diff != 0 && diff != 2)
            {
                ok = false;
                break;
            }
            l++;
            r--;
        }
        cout << (ok ? "YES" : "NO") << endl;
    }

    return 0;
}