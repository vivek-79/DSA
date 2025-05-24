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
    bool hasCycle(ListNode *head)
    {

        ListNode *slow = head;
        ListNode *fast = head;

        while (fast && fast->next)
        {

            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                return true;
            };
        };

        return false;
    }
};