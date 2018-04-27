class Solution {
public:
	vector<string> letterCombinations(string digits) {
		vector<string> letter = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
		vector<string> result;
		if (digits.size() == 0)
			return result;
		result.push_back("");
		for (int i = 0; i < digits.size(); i++)
		{
			string s = letter[digits[i] - '0'];
			vector<string> temp;
			for (int j = 0; j < s.size(); j++)
			{
				for (int k = 0; k < result.size(); k++)
				{
					temp.push_back(result[k] + s[j]);
				}
			}
			result = temp;
		}
		return result;
	}
};