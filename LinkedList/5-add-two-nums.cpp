
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


Node* addLL(Node* head1,Node* head2){


    Node* temp1 = head1;
    Node* temp2 = head2;
    
    Node* dummy= new Node(0);
    Node *curr = dummy;
    
    int carry =0;
    while (temp1 || temp2)
    {

        int sum = carry;

        if(temp1) sum +=temp1->data;
        if(temp2) sum +=temp2->data;

        Node *newNode = new Node(sum%10);
        carry = sum / 10;

        curr->next = newNode;
        curr = newNode;

        if(temp1)temp1 = temp1->next;
        if(temp2)temp2 = temp2->next;
    };

    if(carry){
        Node *newNode = new Node(carry);
        curr->next = newNode;
    }

    return dummy->next;
};

main()
{

    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {1, 2, 3, 4, 5};

    Node *head1 = convert(arr1);
    Node *head2 = convert(arr2);
    Node* temp = addLL(head1,head2);

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    };
}