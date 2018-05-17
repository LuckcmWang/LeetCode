/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
class Solution {

public:
	ListNode* mergeKLists(vector<ListNode*>& lists) {
		vector<int> result;
		ListNode* ans = (ListNode*)malloc(sizeof(ListNode));
		ans->next == NULL;
		for (int i = 0; i<lists.size(); i++)
		{
			while (lists[i] != NULL)
			{
				result.push_back(lists[i]->val);
				lists[i] = lists[i]->next;
			}
		}
		if (result.empty())
		{
			return NULL;
		}
		sort(result.begin(), result.end());
		ListNode* temp = ans;
		for (int i = 0; i<result.size(); i++)
		{
			temp->val = result[i];
			temp->next = NULL;
			if (i + 1 == result.size())break;
			ListNode* node = (ListNode*)malloc(sizeof(ListNode));
			temp->next = node;
			temp = node;
		}
		return ans;
	}
};