// #1290 Convert Binary Number in Linked list to Integer
int getDecimalValue(ListNode *head)
{
    int total = 0, res = 0;
    ListNode *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        total++;
    }
    temp = head;
    total--;
    while (temp != NULL)
    {
        res += pow(2, total) * temp->val;
        total--;
        temp = temp->next;
    }
    return res;
}