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

    for (int i = 0; i < n; i++)
    {
        vector<int> freq(26, 0);
        int maxFreq = 0;

        for (int j = i; j < n; j++)
        {
            int idx = s[j] - 'a';
            freq[idx]++;

            maxFreq = max(maxFreq, freq[idx]);

            int len = j - i + 1;

            if (maxFreq <= len / 2)
            {
                cout << "YES\n";
                cout << s.substr(i, len) << "\n";
                return 0;
            }
        }
    }

    cout << "NO\n";
    return 0;
}