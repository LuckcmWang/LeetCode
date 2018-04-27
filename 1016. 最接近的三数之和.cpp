class Solution {
public:
	int threeSumClosest(vector<int>& nums, int target) {
		sort(nums.begin(), nums.end());
		int distance = 10000000;
		int result = 0;
		for (int i = 1; i < nums.size() - 1; i++)
		{
			int left = 0, right = nums.size() - 1;
			while (left<i&&right>i)
			{
				int temp = nums[left] + nums[i] + nums[right];
				int dis = temp - target;
				if (dis < 0) dis *= -1;
				if (dis < distance){
					distance = dis;
					result = temp;
				}
				if (temp < target) left++;
				if (temp > target) right--;
				if (temp == target) return temp;
			}
		}
		return result;
	}
};