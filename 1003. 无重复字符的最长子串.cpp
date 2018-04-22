class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int result = 0;
		set<char> c;
		for (int i = 0; i < s.size(); i++){
			c.clear();
			int temp = 0;
			for (int j = i; j < s.size(); j++){
				if (c.count(s[j])==1)
				{
					break;
				}
				temp++;
				c.insert(s[j]);
			}
			if (result < temp)result = temp;
		}
		return result;
	}
};