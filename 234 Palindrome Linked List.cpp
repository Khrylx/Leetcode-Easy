//
//  main.cpp
//  Leetcode
//
//  Created by Eric on 15/5/14.
//  Copyright (c) 2015年 Eric. All rights reserved.
//

#include <vector>
#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <list>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* createList()
{
    ListNode* head=NULL;
    ListNode* curL=NULL;
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


bool isPalindrome(ListNode* head) {
    if (!head || !head->next) {
        return true;
    }
    
    ListNode* cur = head->next;
    ListNode* mid = head;
    
    bool move = false;
    
    while (cur) {
        if (move) {
            mid = mid->next;
        }
        move = !move;
        cur = cur->next;
    }
    
    ListNode* p1 = mid->next;
    mid->next = NULL;
    ListNode* p2 = p1->next;
    p1->next = NULL;
    
    while (p2) {
        ListNode* p3 = p2->next;
        p2->next = p1;
        p1 = p2;
        p2 = p3;
    }
    
    while (p1) {
        if (head->val != p1->val) {
            return false;
        }
        head = head->next;
        p1 = p1->next;
        
    }
    return true;
}

int main(){
    
    ListNode* L = createList();
    bool res = isPalindrome(L);
    destroyList(L);
    return 1;
}
