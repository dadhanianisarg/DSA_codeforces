#include <bits/stdc++.h>
using namespace std;

void solve(int n, int m, vector<vector<char>>& grid) {
    for(int i = 0; i < n; i+=2) {
        for(int j = 0; j < m; j++) {
            grid[i][j] = '#';
        }
    }

    for(int i = 1; i < n; i+=2) {
        if((i-1) % 4 == 0) {
            grid[i][m-1] = '#';
        } else {
            grid[i][0] = '#';
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , m;
    cin>> n >> m;
    vector<vector<char>> grid(n, vector<char>(m, '.'));
    solve(n, m, grid);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }
    return 0;
}