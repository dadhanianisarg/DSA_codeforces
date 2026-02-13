#include <bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>> &mat)
{
    int r = -1, c = -1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (mat[i][j] == 1)
            {
                r = i;
                c = j;
                break;
            }
        }
    }

    int ans = abs(r - 2) + abs(c - 2);
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> mat(5, vector<int>(5));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> mat[i][j];
        }
    }

    int ans = solve(mat);
    cout<<ans<<"\n";
    return 0;
}