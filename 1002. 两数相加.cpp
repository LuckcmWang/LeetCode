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
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* l3 = new ListNode(0);
		ListNode* t = l3;
		int temp = 0;
		while (l1!=NULL||l2!=NULL||temp!=0)
		{
			if (l1 == NULL&&l2!=NULL){
				t->next = new ListNode((temp+l2->val)%10);
				temp = (temp + l2->val) / 10;
				l2 = l2->next;
				t = t->next;
				continue;
			}
			if (l2 == NULL&&l1!=NULL){
				t->next = new ListNode((temp+l1->val)%10);
				temp = (temp + l1->val) / 10;
				l1 = l1->next;
				t = t->next;
				continue;
			}
			if (l1!= NULL&& l2!=NULL){
				t->next = new ListNode((temp+l1->val + l2->val)%10);
				temp = (temp + l1->val + l2->val) / 10;
				l2 = l2->next;
				l1 = l1->next;
				t = t->next;
				continue;
			}
			if (l1 == NULL&& l2 == NULL&&temp!=0){
				t->next = new ListNode(temp);
				break;
			}
		}
		return l3->next;
	}
};