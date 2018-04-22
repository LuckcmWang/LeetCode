class Solution {
public:
	string convert(string s, int numRows) {
		if (numRows==1)
		{
			return s;
		}
		vector<string> result(numRows);
		int i = 0, j = 0;
		while (i<s.size())
		{
			if (j<numRows)
			{
				result[j] += s[i];
				j++;
				i++;
				continue;
			}
			if (j==numRows)
			{
				j -= 2;
				while (j != 0 && i<s.size())
				{
					result[j] += s[i];
					j--; i++;
				}
				continue;
			}
			
		}
		string r = "";
		for (int i = 0; i < numRows; i++)
		{
			r += result[i];
		}
		return r;
	}
};


