class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		if (nums1.empty()||nums2.empty())
		{
			if (nums1.empty()){
				if (nums2.size() % 2 == 1)
				{
					return nums2[nums2.size() / 2];
				}
				if (nums2.size() % 2 == 0)
				{
					return ((double)nums2[nums2.size() / 2] + (double)nums2[nums2.size() / 2 - 1]) / 2;
				}
			}
			if (nums2.empty()){
				if (nums1.size() % 2 == 1)
				{
					return nums1[nums1.size() / 2];
				}
				if (nums1.size() % 2 == 0)
				{
					double r = ((double)nums1[nums1.size() / 2] + (double)nums1[nums1.size() / 2 - 1]) / 2;
					return r;
				}
			}
		}
		vector<int> nums3(nums1.size()+nums2.size());
		int p1 = 0, p2 = 0;
		for (int i = 0; i < nums1.size()+nums2.size(); i++)
		{
			if (p1 >= nums1.size()&&p2 < nums2.size())
			{
				nums3[i] = nums2[p2];
				p2++;
			}
			if (p1 < nums1.size() && p2 >= nums2.size())
			{
				nums3[i] = nums1[p1];
				p1++;
			}
			if (p1 < nums1.size() && p2 < nums2.size())
			{
				if (nums1[p1]<nums2[p2])
				{
					nums3[i] = nums1[p1];
					p1++;
					continue;
				}
				else{
					nums3[i] = nums2[p2];
					p2++;
					continue;
				}
			}
		}
		if (nums3.size()%2==1)
		{
			return nums3[nums3.size() / 2];
		}
		if (nums3.size()%2==0)
		{
			double r = ((double)nums3[nums3.size() / 2] + (double)nums3[nums3.size() / 2 - 1]) / 2;
			return r;
		}
	}
};