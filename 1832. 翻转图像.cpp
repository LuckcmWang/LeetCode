class Solution {
public:
	vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
		for (auto &i : A)
		{
			stack<int> temp;
			for (auto j:i)
			{
				if (j==0) 
					temp.push(1);
				if (j==1)
					temp.push(0);
			}
			for (auto &j:i)
			{
				j = temp.top();
				temp.pop();
			}
		}
		return A;
	}
};