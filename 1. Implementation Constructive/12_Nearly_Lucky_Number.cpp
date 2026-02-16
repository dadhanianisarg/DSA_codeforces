#include <bits/stdc++.h>
using namespace std;

bool isLucky(int x)
{
    if (x == 0)
        return false;

    while (x > 0)
    {
        int digit = x % 10;
        if (digit != 4 && digit != 7)
            return false;
        x /= 10;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    string s = to_string(n);

    int cnt = 0;
    for (char c : s)
    {
        if (c == '4' || c == '7')
            cnt++;
    }

    if (isLucky(cnt))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
