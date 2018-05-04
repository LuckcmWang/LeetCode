class Solution {
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target) {
		set<vector<int>> ans;
		vector<vector<int>> result;
		if (nums.size()==0)
		{
			return result;
		}
		sort(nums.begin(), nums.end());
		map<int,int> hash;
		int offset = 50000000;
		for (auto i:nums)
		{
			hash[offset + i]++;
		}
		for (int i = 1; i < nums.size()-1; i++)
		{
			int left = 0, right = nums.size() - 1;
			while (left<i&&right>i)
			{
				hash[nums[left] + offset]--;
				hash[nums[right] + offset]--;
				hash[nums[i] + offset]--;
				int d_value = target - nums[right] - nums[left] - nums[i];
				if (hash[d_value+offset])
				{
					vector<int> temp{ nums[left], nums[right], nums[i], d_value };
					sort(temp.begin(), temp.end());
					ans.insert(temp);
				}
				hash[nums[left] + offset]++;
				hash[nums[right] + offset]++;
				hash[nums[i] + offset]++;
				if (right-1==i&&left+1!=i)
				{
					left++;
					continue;
				}
				if (right - 1 != i&&left + 1 == i)
				{
					right--;
					continue;
				}
				if (d_value<0)
				{
					right--;
				}
				if (d_value>=0)
				{
					left++;
				}
			}
		}
		
		for (auto i = ans.begin(); i != ans.end(); i++)
		{
			result.push_back(*i);
		}
		return result;
	}
};