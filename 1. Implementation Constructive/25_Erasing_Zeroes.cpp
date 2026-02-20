#include <bits/stdc++.h>
using namespace std;

int solve(string s)
{
    int first = -1, last = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            first = i;
            break;
        }
    }
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            last = i;
            break;
        }
    }

    if (first == -1 || first == last)
        return 0;
    int cnt = 0;
    for (int i = first; i <= last; i++)
    {
        if (s[i] == '0')
            cnt++;
    }

    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << solve(s) << "\n";
    }

    return 0;
}
