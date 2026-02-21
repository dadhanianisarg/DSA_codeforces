#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;

    string s;
    cin >> s;

    vector<int> freq(26, 0);

    for (char c : s)
        freq[c - 'a']++;

    // Check divisibility
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % k != 0)
        {
            cout << -1 << "\n";
            return 0;
        }
    }
    string base = "";
    for (int i = 0; i < 26; i++)
    {
        base += string(freq[i] / k, char('a' + i));
    }

    string ans = "";
    for (int i = 0; i < k; i++)
        ans += base;

    cout << ans << "\n";

    return 0;
}