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
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode* p1 = head;
		ListNode* p2 = head;
		while (n--!=1)
		{
			p1 = p1->next;
		}
		while (p1->next!=NULL)
		{
			p1 = p1->next;
			p2 = p2->next;
		}
		if (head == p2)
		{
			return head->next;
		}
		ListNode* head1 = head;
		while (head1!=NULL)
		{
			if (head1->next==p2)
			{
				head1->next = head1->next->next;
				return head;
			}
			head1 = head1->next;
		}
	}
};