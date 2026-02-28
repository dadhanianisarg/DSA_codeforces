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
        string s, h;
        cin >> s;
        cin >> h;
        int n = s.size();
        int m = h.size();
        if (n > m)
        {
            cout << "NO\n";
            continue;
        }
        unordered_map<char, int> mpS, mpH;
        for (char c : s)
        {
            mpS[c]++;
        }
        int l = 0;
        bool found = false;
        for (int r = 0; r < m; r++)
        {
            mpH[h[r]]++;
            if (r - l + 1 > n)
            {
                mpH[h[l]]--;
                if (mpH[h[l]] == 0)
                    mpH.erase(h[l]);
                l++;
            }
            if (r - l + 1 == n && mpH == mpS)
            {
                found = true;
                break;
            }
        }
        if (found)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}