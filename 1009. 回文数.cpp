class Solution {
public:
	bool isPalindrome(int x) {
		string str = to_string(x);
		string restr = str;
		std::reverse(restr.begin(),restr.end());
		if (str==restr)
		{
			return true;
		}
		return false;
	}
};