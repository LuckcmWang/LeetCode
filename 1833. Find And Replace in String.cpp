class Solution {
public:
	string findReplaceString(string S, vector<int>& indexes, vector<string>& sources, vector<string>& targets) {
		int cnt = 0;
		int offset = 0;
		for (auto i:sources)
		{
			string temp = "";
			if (indexes[cnt] + offset < 0){
				temp = S.substr(indexes[cnt], i.size());
				if (temp == sources[cnt])
				{
					S.replace(indexes[cnt], i.size(), targets[cnt]);
					offset += targets[cnt].size() - sources[cnt].size();
				}
				cnt++;
				continue;
			}
			
			if (indexes[cnt] + offset + i.size() <= S.size())
				temp = S.substr(indexes[cnt] + offset, i.size());
				
			if (temp==sources[cnt])
			{
				S.replace(indexes[cnt] + offset, i.size(), targets[cnt]);
				offset += targets[cnt].size() - sources[cnt].size();
			}
			cnt++;
		}
		return S;
	}
};