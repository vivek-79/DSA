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

Node *reverseLL(Node *head)
{

    if (head == NULL || head->next == NULL)
        return head;

    Node *temp = head;
    Node *mover = NULL;

    while (temp)
    {

        Node *remember = temp->next;
        temp->next = mover;
        mover = temp;
        temp = remember;
    }

    return mover;
};

Node *addOne(Node *head)

{
    if (head == NULL) return head;

    Node *temp = head;

    int carry = 1;

    while (temp)
    {

        int sum = temp->data + carry;
        temp->data = sum %10;
        carry = sum/10;

        if(carry && temp->next == NULL){
            temp->next = new Node(1);
            carry =0;
            break;
        };

        temp = temp->next;
    }

    if (carry)
    {
        temp = new Node(1);
    }

    return head;
};

main()
{

    vector<int> arr1 = {1,4,9};

    Node *head = convert(arr1);
    Node *temp = reverseLL(head);
    Node *added = addOne(temp);
    Node *result = reverseLL(added);

    while (result)
    {
        cout << result->data << " ";
        result = result->next;
    };
}