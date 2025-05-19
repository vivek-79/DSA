#include <bits/stdc++.h>
using namespace std;

// defining self defined class to create LL

class Node
{

public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {

        data = data1;
        next = next1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

// function to conert array to LL

Node *convert(vector<int> &arr)
{

    Node *head = new Node(arr[0]);

    // mover to provide the adress of next data to previous data to form link between them
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {

        Node *temp = new Node(arr[i]);

        // initializing mover new address of new data
        mover->next = temp;
        mover = temp;
    };
    return head;
}

Node *deleteNthLast(Node *head, int n)
{

    Node *fast = head;
    Node *slow = head;

    for (int i = 0; i < n; i++)
    {
        fast = fast->next;

        if (fast == NULL)
        {

            Node *newHead = head->next;
            delete head;
            return newHead;
        }
    };

    while (fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    };

    Node * delNode = slow->next;
    slow ->next = slow->next->next;

    delete delNode;

    return head;
};

main()
{

    vector<int> arr1 = {0, 1,2,3,4,5};

    Node *head = convert(arr1);
    Node *temp = deleteNthLast(head, 2);

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    };
}