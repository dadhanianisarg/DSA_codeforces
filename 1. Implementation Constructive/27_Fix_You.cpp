#include <bits/stdc++.h>
using namespace std;

int solve(int n ,int m, vector<vector<char>>& grid) {
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(grid[i][m - 1] == 'R') ans++;
    }
    for(int j = 0; j < m; j++) {
        if(grid[n - 1][j] == 'D') ans++;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n , vector<char>(m));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        int ans = solve(n,m,grid);
    
        cout<<ans<<endl;
    }
    

    return 0;
}