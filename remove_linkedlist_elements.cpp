// #203 Remove Linked List Elements

#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Solution starts here

ListNode *removeElements(ListNode *head, int val)
{
    if (head == NULL)
        return head;
    ListNode *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        if (temp->next->val == val)
        {
            temp->next = temp->next->next;
        }
        else
        {
            temp = temp->next;
        }
    }
    if (head->val == val)
        head = head->next;
    return head;
}