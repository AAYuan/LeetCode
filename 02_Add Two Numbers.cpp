//
//  main.cpp
//  Add Two Numbers
//
//  Created by AYuan on 15/7/27.
//  Copyright (c) 2015年 AYuan. All rights reserved.
//

#include <iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x),next(NULL){}
};
class Solution{
public:
    ListNode *addTwoNumbers(ListNode *l1,ListNode *l2)
    {
        ListNode *head=(ListNode *)malloc(sizeof(ListNode));
        ListNode *pre = head;
        ListNode *node = NULL;
        //进位
        int c=0,sum;
        //加法
        while(l1!=NULL&&l1!=NULL)
        {
            sum=l1->val+l2->val+c;
            c=sum/10;
            node=(ListNode*)malloc(sizeof(ListNode));
            sum=sum%10;
            node->val=sum;
            node->next=NULL;
            //尾插法
            pre->next=node;
            pre=node;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL)
        {
            sum=l1->val+c;
            c=sum/10;
            node=(ListNode*)malloc(sizeof(ListNode));
            node->val=sum%10;
            node->next=NULL;
            //尾插法
            pre->next=node;
            pre=node;
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            sum=l2->val+c;
            c=sum%10;
            node=(ListNode*)malloc(sizeof(ListNode));
            node->val=sum%10;
            node->next=NULL;
            //尾插法
            pre->next=node;
            pre=node;
            l2=l2->next;
        }
        //最后一位还有进位
        if(c>0)
        {
            node=(ListNode*)malloc(sizeof(ListNode));
            node->val=c;
            //尾插法
            pre->next=node;
            pre=node;
        }
        return head->next;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    Solution solution;
    int A[] = {2,4,7,9};
    int B[] = {1,3,5};
    ListNode *head=NULL;
    ListNode *head1=(ListNode*)malloc(sizeof(ListNode));
    ListNode *head2=(ListNode*)malloc(sizeof(ListNode));
    head1->next=NULL;
    head2->next=NULL;
    ListNode *pre=head1;
    ListNode *node=NULL;
    for(int i=0;i<4;i++)
    {
        node=(ListNode*)malloc(sizeof(ListNode));
        node->val=A[i];
        node->next=NULL;
        pre->next=node;
        pre=node;
    }
    pre=head2;
    for(int i=0;i<3;i++)
    {
        node=(ListNode*)malloc(sizeof(ListNode));
        node->val=B[i];
        node->next=NULL;
        pre->next=node;
        pre=node;
    }
    head=solution.addTwoNumbers(head1->next,head2->next);
    while(head)
    {
        cout<<head->val<<"->"<<endl;
        head=head->next;
    }
    return 0;
}
