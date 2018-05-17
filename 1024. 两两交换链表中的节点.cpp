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
	ListNode* swapPairs(ListNode* head) {
		if (head == NULL || head->next == NULL)
		{
			return head;
		}
		ListNode* temp = head->next;
		ListNode* ins = head;
		head = head->next;
		while (temp != NULL)
		{
			ins->next = temp->next;
			temp->next = ins;
			ListNode* ex = ins;
			ins = temp;
			temp = ex;
			int i = 0;
			while (i<2 && temp != NULL)
			{
				i++;
				ins = ins->next;
				temp = temp->next;
			}
			if (temp == NULL) break;
			ex->next = temp;
		}
		return head;
	}
};