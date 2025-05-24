#include <bits/stdc++.h>
using namespace std;

class ListNode
{

public:
    int data;
    ListNode *next;

public:
    ListNode(int data1, ListNode *next1)
    {

        data = data1;
        next = next1;
    }

    ListNode(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

class Solution
{
public:
    ListNode *deleteMiddle(ListNode *head)
    {

        if (head->next == NULL)
            return NULL;
        if (head->next->next == NULL)
        {

            ListNode *temp = head->next;
            head->next = NULL;
            delete temp;

            return head;
        };

        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *prev = nullptr;

        while (fast && fast->next)
        {

            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        };

        prev->next = slow->next;

        delete slow;
        return head;
    }
};