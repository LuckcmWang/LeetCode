class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		vector<vector<int>> result;
		if (nums.size()==0)
		{
			return result;
		}
		sort(nums.begin(), nums.end());
		set<vector<int>> tt;
		for (int i = 1; i < nums.size() - 1; i++)
		{
			int left = 0, right = nums.size() - 1;
			while (left<i && right>i)
			{
				if (nums[left] + nums[right] + nums[i]>0)
				{
					right--;
					continue;
				}
				if (nums[left] + nums[right] + nums[i] == 0)
				{
					vector<int> temp(3);
					temp[0] = nums[left];
					temp[1] = nums[i];
					temp[2] = nums[right];
					tt.insert(temp);
					if (left + 1<i)
					{
						left++;
						continue;
					}
					if (right - 1>i)
					{
						right--;
						continue;
					}
					if (left + 1 == i&&right - 1 == i)
					{
						break;
					}
				}
				if (nums[left] + nums[right] + nums[i]<0)
				{
					left++;
					continue;
				}
			}
		}
		set<vector<int>>::iterator it;
		for (it = tt.begin(); it  != tt.end(); it++)
		{
			result.push_back(*it);
		}
		return result;
	}
};