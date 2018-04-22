class Solution {
public:
	bool isMatch(string s, string p) {
		if (p==".*")
		{
			return true;
		}
		for (int i = 0; i < p.size(); i++)
		{
			int temp = i;
			int j = 0;
			for (j = 0; j < s.size(); j++)
			{
				//这里要把*号的问题处理掉
				if (temp<p.size()&&p[temp]=='*')
				{
					int k1 = 1;
					int k2 = j;
					int sta = j;
					int flag = 1;
					while (temp+k1<p.size())
					{
						if (p[temp + k1] == s[k2] && k1 = 1)
						{
							sta = k2;
							k2++;
							k1++;
							break;
						}
						if (p[temp + k1] != s[k2] && k1 = 1)
						{
							k2++;
						}
					}
				}
				if (temp<p.size()&&p[temp]=='.')
				{
					temp++;
					continue;
				}
				if (s[j]!=p[temp]||temp>=p.size())
				{
					break;
				}
				temp++;
			}
			if (j==s.size())
			{
				return true;
			}
		}
		return false;
	}
};