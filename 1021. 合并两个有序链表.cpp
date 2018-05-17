/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
//�ϲ�����һ�㶼��Ҫ�½�һ����㣬һ��ָ�룬ָ��ȡ���ĵ�ַ����ָ����в������𰸷��ؽڵ��λ�á�
class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		ListNode result=ListNode(0);
		ListNode *temp = &result;
		while (l1!=NULL&&l2!=NULL)
		{
			if (l1->val<=l2->val)
			{
				temp->next = l1;
				l1 = l1->next;
				temp = temp->next;
			}
			else{
				temp->next = l2;
				l2 = l2->next;
				temp = temp->next;
			}
		}
		if (l1==NULL&&l2!=NULL)
		{
			while (l2!=NULL)
			{
				temp->next = l2;
				l2 = l2->next;
				temp = temp->next;
			}
		}
		if (l2==NULL&&l1!=NULL)
		{
			while (l1 != NULL)
			{
				temp->next = l1;
				l1 = l1->next;
				temp = temp->next;
			}
		}
		return result.next;
	}
};