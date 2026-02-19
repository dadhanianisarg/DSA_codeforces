#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for (char c : s)
    {
        if (c == '1')
            cnt1++;
        else if (c == '2')
            cnt2++;
        else if (c == '3')
            cnt3++;
    }

    string result = "";
    while (cnt1--)
        result += "1+";
    while (cnt2--)
        result += "2+";
    while (cnt3--)
        result += "3+";
    result.pop_back();
    cout << result << "\n";

    return 0;
}