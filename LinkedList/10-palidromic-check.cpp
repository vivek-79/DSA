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

Node * reverseLL(Node* head){

    if(head == NULL || head->next == NULL) return head;

    Node* curr = head;
    Node* prev = NULL;

    while(curr){

        Node* remem = curr->next;
        curr->next = prev;
        prev = curr;
        curr = remem;
    }

    return prev;
};

bool PalidromCheck(Node* head){

    if(head == NULL || head->next == NULL) return true;

    Node* slow = head;
    Node* fast = head;

    // FINDING MIDDLE 
    while(fast->next && fast->next->next){

        slow = slow->next;
        fast = fast->next->next;
    };

    Node *secondhead = reverseLL(slow->next);

    Node* second = secondhead;
    Node* first = head;

    while(second){

        if(second->data !=first->data){

            reverseLL(secondhead);
            return false;
        }

        second = second->next;
        first = first->next;
    }

    reverseLL(secondhead);
    return true;
} ;

main()
{

    vector<int> arr1 = {0};

    Node *head = convert(arr1);
    bool temp = PalidromCheck(head);

    cout<< temp;
}