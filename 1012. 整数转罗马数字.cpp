class Solution {
public:
	string intToRoman(int num) {
		string result = "";
		if (int i = num/1000)
		{
			for (int j = 0; j < i; j++)
			{
				result += 'M';
			}
		}
		num %= 1000;
		while (int i = num/100)
		{
			if (i==9)
			{
				result += "CM";
				break;
			}
			if (i == 4)
			{
				result += "CD";
				break;
			}
			if (i>=5)
			{
				result += 'D';
				for (int j = 0; j < i-5; j++)
				{
					result += 'C';
				}
				break;
			}
			else
			{
				for (int j = 0; j < i; j++)
				{
					result += 'C';
				}
				break;
			}
		}
		num %= 100;
		while (int i = num/10)
		{
			if (i == 9)
			{
				result += "XC";
				break;
			}
			if (i == 4)
			{
				result += "XL";
				break;
			}
			if (i >= 5)
			{
				result += 'L';
				for (int j = 0; j < i - 5; j++)
				{
					result += 'X';
				}
				break;
			}
			else
			{
				for (int j = 0; j < i; j++)
				{
					result += 'X';
				}
				break;
			}
		}
		num %= 10;
		while (int i = num)
		{
			if (i == 9)
			{
				result += "IX";
				break;
			}
			if (i == 4)
			{
				result += "IV";
				break;
			}
			if (i >= 5)
			{
				result += 'V';
				for (int j = 0; j < i - 5; j++)
				{
					result += 'I';
				}
				break;
			}
			else
			{
				for (int j = 0; j < i; j++)
				{
					result += 'I';
				}
				break;
			}
		}
		return result;
	}
};