#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    // Upper part
    for (int i = 0; i <= n; i++)
    {
        for (int j = i; j < n; j++)
            cout << "  ";

        for (int j = 0; j <= i; j++)
        {
            cout << j;
            if (j != i)
                cout << " ";
        }

        for (int j = i - 1; j >= 0; j--)
            cout << " " << j;

        cout << "\n";
    }

    // Lower part
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i; j < n; j++)
            cout << "  ";

        for (int j = 0; j <= i; j++)
        {
            cout << j;
            if (j != i)
                cout << " ";
        }

        for (int j = i - 1; j >= 0; j--)
            cout << " " << j;

        cout << "\n";
    }

    return 0;
}