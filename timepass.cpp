class Solution
{
public:
    int almostPalindromic(string s)
    {
        int n = s.size();
        vector<vector<int>> dp(n + 3, vector<int>(n + 3, 0));
        int ans = -1;
        for (int k = 1; k <= n; ++k)
        {
            for (int i = 0, j = k - 1; i <= n - k && j <= n - 1; ++i, ++j)
            {
                if (i == j)
                    dp[i][j] = 1;
                else
                {
                    if (j == i + 1)
                    {
                        if (s[i] == s[j])
                            dp[i][j] = 1;

                        else
                        {
                            if (dp[i][j - 1] == 1 || dp[i + 1][j] == 1)
                                dp[i][j] = 2;
                        }
                    }
                    else
                    {
                        if (s[i] == s[j])
                        {
                            if (dp[i + 1][j - 1] == 1)
                                dp[i][j] = 1;
                            else if (dp[i + 1][j - 1] == 2)
                                dp[i][j] = 2;
                        }
                        else if (s[i] != s[j])
                        {
                            if (dp[i + 1][j] == 1 || dp[i][j - 1] == 1)
                                dp[i][j] = 2;
                        }
                    }
                }
                if (dp[i][j] != 0)
                    ans = max(ans, j - i + 1);
            }
        }

        return ans;
    }
};