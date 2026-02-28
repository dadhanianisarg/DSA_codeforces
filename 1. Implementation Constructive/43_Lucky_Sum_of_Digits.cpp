#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int x = -1, y = -1;

    for (int i = n / 7; i >= 0; i--)
    {
        int rem = n - 7 * i;

        if (rem % 4 == 0)
        {
            x = rem / 4;
            y = i;
            break;
        }
    }

    if (x == -1)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 0; i < x; i++)
            cout << '4';
        for (int i = 0; i < y; i++)
            cout << '7';

        cout << endl;
    }

    return 0;
}

// TLE
// #include <bits/stdc++.h>
// using namespace std;

// string helper(int n)
// {
//     if (n == 0)
//         return "";
//     if (n < 0)
//         return "#";

//     string res4 = helper(n - 4);
//     string res7 = helper(n - 7);

//     string add4 = "#", add7 = "#";

//     if (res4 != "#")
//         add4 = "4" + res4;

//     if (res7 != "#")
//         add7 = "7" + res7;

//     if (add4 == "#")
//         return add7;
//     if (add7 == "#")
//         return add4;

//     if (add4.length() != add7.length())
//         return (add4.length() < add7.length()) ? add4 : add7;

//     return min(add4, add7);
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;

//     string ans = helper(n);

//     if (ans == "#")
//         cout << -1 << endl;
//     else
//         cout << ans << endl;

//     return 0;
// }
