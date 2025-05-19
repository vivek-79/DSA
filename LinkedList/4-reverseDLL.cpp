#include <bits/stdc++.h>
using namespace std;

// defining self defined class to create Doubly LL

class Node
{

public:
    int data;
    Node *next;
    Node *prev;

public:
    Node(int data1, Node *next1, Node *prev1)
    {

        data = data1;
        next = next1;
        prev = prev1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

// function to conert array to LL

Node *convert(vector<int> &arr)
{

    Node *head = new Node(arr[0]);

    // prev to provide the adress of previous data to  form link between them
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {

        Node *temp = new Node(arr[i], nullptr, mover);

        // initializing mover new address of new data
        mover->next = temp;
        mover = temp;
    };
    return head;
}

//reverse a dll

Node* reverseLL( Node*head){

    Node* temp = NULL;
    Node* current = head;

    while( current){
        temp = current->prev;
        current->prev = current->next;
        current->next= temp;
        current= current->prev;
    }
    return temp->prev;
}
main()
{

    vector<int> arr = {1, 2, 3, 4, 5};

    Node *head = convert(arr);

    Node *temp = reverseLL(head);
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    };
}