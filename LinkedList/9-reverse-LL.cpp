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


Node* reverseLL(Node* head){

    if(head == NULL || head->next == NULL) return head;

    Node* prev = NULL;
    Node* ahead = head;

    while (ahead)
    {

        Node *remember = ahead->next;
        ahead->next = prev;
        prev = ahead;
        ahead = remember;
    };

    return prev;
};

main()
{

    vector<int> arr1 = {0, 1, 2, 3, 4, 5};

    Node *head = convert(arr1);
    Node *temp = reverseLL(head);

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    };
}