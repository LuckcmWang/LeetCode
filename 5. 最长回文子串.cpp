class Solution {
public:
	string longestPalindrome(string s) {
		const int n = s.size();
		bool dp[n][n];
		fill_n(&dp[0][0], n*n, false);
		int max_len = 1; //保存最长回文子串长度  
		int start = 0;//保存最长回文子串起点  
		for (int i = 0; i<s.size(); ++i)
		{
			for (int j = 0; j <= i; ++j)
			{
				if (i - j<2)
					dp[j][i] = (s[i] == s[j]);
				else
					dp[j][i] = (s[i] == s[j] && dp[j + 1][i - 1]);
				if (dp[j][i] && max_len<(i - j + 1))
				{
					max_len = i - j + 1;
					start = j;
				}
			}
		}
		return s.substr(start, max_len);
	}
};