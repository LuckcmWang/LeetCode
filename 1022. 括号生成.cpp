class Solution {
public:
	vector<string> generateParenthesis(int n) {
		string s = "";
		dfs(s, n, 0);
		return result;
	}
private:
	vector<string> result;
	void dfs(string temp, int left, int right){
		if (left==0&&right==0)
		{
			result.push_back(temp);
		}
		if (left > 0){  dfs(temp+'(', left - 1, right + 1); }
		if (right > 0){ dfs(temp+')', left, right - 1); }
	}
};