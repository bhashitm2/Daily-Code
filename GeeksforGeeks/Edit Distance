class Solution {
public:
    int editDistance(string s1, string s2) {
        int n = s1.size(), m = s2.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= m; j++) {
                if (i == 0)
                    dp[i][j] = j; // s1 is empty, insert all characters of s2
                else if (j == 0)
                    dp[i][j] = i; // s2 is empty, remove all characters of s1
                else if (s1[i - 1] == s2[j - 1])
                    dp[i][j] = dp[i - 1][j - 1]; // Characters match, no operation needed
                else
                    dp[i][j] = 1 + min({dp[i - 1][j],     // Remove
                                        dp[i][j - 1],     // Insert
                                        dp[i - 1][j - 1]}); // Replace
            }
        }
        return dp[n][m];
    }
};
