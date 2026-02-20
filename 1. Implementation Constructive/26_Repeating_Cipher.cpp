#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans;
    int x = 1;
    for (int i = 0; i < n;)
    {
        ans += s[i];
        i += x;
        x++;
    }
    cout << ans << endl;

    return 0;
}