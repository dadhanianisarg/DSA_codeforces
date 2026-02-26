#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (isupper(s[i]))
            cnt++;
    }

    if (cnt == s.size() - 1)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (islower(s[i]))
                s[i] = toupper(s[i]);
            else
                s[i] = tolower(s[i]);
        }
    }

    cout << s;

    return 0;
}