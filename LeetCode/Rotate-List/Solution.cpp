1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* rotateRight(ListNode* head, int k) {
14        if(head==NULL || head->next==NULL || k==0)
15        {
16            return head;
17        }
18        int len=1;
19        auto temp=head;
20        while(temp->next!=NULL)
21        {
22            len++;
23            temp=temp->next;
24        }
25        k=k%len;
26        if(k==0)
27        {
28            return head;
29        }
30        auto cur=head;
31        for(int i=0;i<len-k-1;i++)
32        {
33            cur=cur->next;
34        }
35        auto newhead=cur->next;
36        cur->next=NULL;
37        temp->next=head;
38        return newhead;
39    }
40};