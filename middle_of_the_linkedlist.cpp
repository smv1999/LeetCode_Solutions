// #876 Middle of the Linked List

#include<bits/stdc++.h>

using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

 // Solution starts here 
 
 ListNode* middleNode(ListNode* head) {
        if(head==NULL)
            return head;
        ListNode *first=NULL, *second=NULL;
        first = second = head;
        while(second && second->next)
        {
            first = first->next;
            second = second->next;
            if(second)
                second = second->next;
        }
        return first;
}