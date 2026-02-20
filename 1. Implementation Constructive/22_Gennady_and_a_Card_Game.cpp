#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    vector<string> arr(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    bool play = false;
    for (int i = 0; i < 5; i++)
    {
        if (s[0] == arr[i][0] || s[1] == arr[i][1])
        {
            play = true;
            break;
        }
    }

    if (play)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}