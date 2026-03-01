#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int l2 = l * 2;
        if (l2 <= r)
            cout << l << " " << l2 << endl;
        else
            cout << "-1 -1" << endl;
    }
    return 0;
}