#include <vector>
#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>
#include <unordered_set>

using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* createList()
{
	ListNode* head=NULL;
	ListNode* curL;
	int n;

	cin>>n;

	for (int i=0;i<n;i++)
	{
		int input;
		cin>>input;
		if (head==NULL)
		{
			head=new ListNode(input);
			curL=head;
		}
		else
		{
			curL->next=new ListNode(input);
			curL=curL->next;
		}
	}

	return head;
}

void printList(ListNode* head)
{
	ListNode* curL=head;

	while (curL!=NULL)
	{
		cout<<curL->val<<" ";
		curL=curL->next;
	}
	cout<<endl;
}

void destroyList(ListNode* head)
{
	ListNode* curL=head;

	while (curL!=NULL)
	{
		ListNode* tmpL=curL;
		curL=curL->next;
		delete tmpL;
	}
}

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
	ListNode* cur1 = headA;
	ListNode* cur2 = headB;

	while (cur1 && cur2)
	{
		cur1 = cur1->next;
		cur2 = cur2->next;
	}

	int count = 0;
	if (!cur2)
	{
		while (cur1)
		{
			count++;
			cur1 = cur1->next;
		}
	}
	else
	{
		while (cur2)
		{
			count--;
			cur2 = cur2->next;
		}
	}

	while (count > 0)
	{
		headA = headA->next;
		count--;
	}	
	while (count < 0)
	{
		headB = headB->next;
		count++;
	}

	while (headA && headB)
	{
		if (headA == headB)
		{
			return headA;
		}
		headA = headA->next;
		headB = headB->next;
	}

	return NULL;

}

int main()
{
	ListNode* l1 = createList();
	ListNode* l2 = createList();
	cout << getIntersectionNode(l1,l2)->val <<endl;
	destroyList(l1);
	destroyList(l2);
	return 1;
}