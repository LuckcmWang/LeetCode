class Solution {
public:
	int myAtoi(string str) {
		int i = 0;
		if (str.size() == 0)
		{
			return 0;
		}
		while (str[i] == ' '&&i<str.size())
		{
			i++;
		}
		if (i == str.size() || isalpha(str[i]))
		{
			return 0;
		}
		string temp = "";
		temp += str[i];
		i++;
		while (str[i] != ' '&&!isalpha(str[i]) && i<str.size() && str[i] != '+'&& str[i] != '-')
		{
			temp += str[i];
			i++;
		}
		map<char, int> count;
		for (int j = 0; j < temp.size(); j++)
		{
			count[temp[j]] += 1;
		}
		if (count['+'] == temp.size() || count['-'] == temp.size() || count['+'] + count['-']>1)
		{
			return 0;
		}
		if (temp[0] == '+')
		{
			string t = "";
			for (int i = 1; i < temp.size(); i++)
			{
				t += temp[i];
			}
			temp = t;
		}
		if (temp.size()>10 && temp[0] != '-')
		{
			return 2147483647;
		}
		if (temp.size() == 10 && temp[0] != '-' && temp >= "2147483647")
		{
			return 2147483647;
		}
		if (temp.size()>11 && temp[0] == '-')
		{
			return -2147483648;
		}
		if (temp.size() == 11 && temp[0] == '-' && temp > "-2147483648")
		{
			return -2147483648;
		}
		long long int result = stoll(temp);
		return (int)result;
	}
};