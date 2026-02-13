#include <bits/stdc++.h>
using namespace std;

int solve(int &n, vector<string> &operations)
{
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (operations[i][1] == '+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    return x;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string> operations(n);
    for (int i = 0; i < n; i++)
    {
        cin >> operations[i];
    }

    int x = solve(n, operations);
    cout << x << "\n";
    return 0;
}