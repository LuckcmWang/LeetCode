class Solution {
public:
	bool isValid(string s) {
		stack<char> temp;
		for (auto i : s)
		{
			if (i == '(' || i == '[' || i == '{')
			{
				temp.push(i);
				continue;
			}
			if ((i == ')'&&!temp.empty() && temp.top() == '(') || (i == ']'&&!temp.empty() && temp.top() == '[') || (i == '}'&&!temp.empty() && temp.top() == '{'))
			{
				temp.pop();
			}else{
				temp.push(i);
			}
		}
		return temp.empty() ? true : false;
	}
};