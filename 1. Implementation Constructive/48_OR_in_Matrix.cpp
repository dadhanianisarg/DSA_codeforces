#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> B(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> B[i][j];

    vector<vector<int>> A(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            bool rowAllOne = true;
            bool colAllOne = true;
            for (int k = 0; k < m; k++)
            {
                if (B[i][k] == 0)
                {
                    rowAllOne = false;
                    break;
                }
            }
            for (int k = 0; k < n; k++)
            {
                if (B[k][j] == 0)
                {
                    colAllOne = false;
                    break;
                }
            }
            if (rowAllOne && colAllOne)
                A[i][j] = 1;
        }
    }
    vector<vector<int>> check(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < m; k++)
                check[i][j] |= A[i][k];

            for (int k = 0; k < n; k++)
                check[i][j] |= A[k][j];
        }
    }
    if (check != B)
    {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }

    return 0;
}