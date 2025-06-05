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

Node *deleteOcccurance(Node *head, int key)
{

    if (head == NULL || (head->next == NULL && head->data == key))
        return NULL;

    Node *temp = head;

    // If Key Is Head
    while (temp && temp->data == key)
    {

        Node *delNode = temp;
        temp = temp->next;
        if(temp) temp->prev = nullptr;

        delete(delNode);
    };

    if (temp == NULL)
        return temp;

    // If Key Is Other Element
    Node* newHead = temp;
    Node *prevNode = NULL;
    Node *nextNode = NULL;
    while (temp)
    {

        nextNode = temp->next;

        if (temp->data == key)
        {
            temp->prev = prevNode;
            if (prevNode)
                prevNode->next = temp->next;

            
            if (nextNode)
                nextNode->prev = prevNode;

            Node *delNode = temp;
            delete (delNode);
        }

        if(temp->data != key) prevNode = temp;
        temp = nextNode;
    }

    return newHead;
};
main()
{

    vector<int> arr = {5,5, 5};

    Node *head = convert(arr);

    Node *temp = deleteOcccurance(head, 5);
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    };
}