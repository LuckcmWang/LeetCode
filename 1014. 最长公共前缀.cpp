class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		int mins = 1000000;
		if (strs.size()==0)
		{
			return "";
		}
		for (int i = 0; i < strs.size(); i++)
		{
			int temp = strs[i].size();
			if (mins>temp)
			{
				mins = temp;
			}
		}
		string result = "";
		int j = 0;
		while (j<mins)
		{
			char f = strs[0][j];
			int flag = 1;
			for (int i = 0; i < strs.size(); i++)
			{
				if (strs[i][j]!=f)
				{
					flag = 0;
					break;
				}
			}
			if (!flag)
			{
				break;
			}
			result += f;
			j++;
		}
		return result;
	}
};