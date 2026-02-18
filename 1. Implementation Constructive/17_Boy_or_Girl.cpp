#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<bool> freq(26, 0);
    string s;
    cin >> s;
    for (char c : s)
        freq[c - 'a'] = true;
    int oddCount = 0;
    for (int i = 0; i < 26; i++)
        if (freq[i])
            oddCount++;
    if (oddCount % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}