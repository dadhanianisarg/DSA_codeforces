#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    string ans = "";
    for (char c : s)
    {
        char lower = tolower(c);
        if (lower == 'a' || lower == 'e' || lower == 'i' ||
            lower == 'o' || lower == 'u')
        {
            continue;
        }
        ans += '.';
        ans += lower;
    }
    cout << ans << "\n";
    return 0;
}