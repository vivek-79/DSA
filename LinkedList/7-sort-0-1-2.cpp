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

Node* sorted(Node* head){

    if(head==NULL || head->next == NULL) return head;


    Node* temp = head;
    Node *zeroDummy = new Node(-1);
    Node *oneDummy = new Node(-1);
    Node *twoDummy = new Node(-1);
    
    Node *zero = zeroDummy;
    Node *ones = oneDummy;
    Node *twos = twoDummy;

    while(temp){

        if(temp->data ==0) {
                zero->next = temp;
                zero = zero -> next;
        }
        else if(temp->data == 1){
            ones->next = temp;
            ones = ones->next;
        }
        else{
            twos->next = temp;
            twos = twos->next;
        }

        temp = temp->next;
    };

    twos->next = NULL;
    zero->next = oneDummy->next ? oneDummy->next : twoDummy->next;
    ones ->next = twoDummy->next;

    Node *newHead = zeroDummy->next;

    delete zeroDummy;
    delete oneDummy;
    delete twoDummy;

    return newHead;
};

main()
{

    vector<int> arr1 = {0,2,2,2};

    Node *head = convert(arr1);
    Node *temp = sorted(head);
    
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    };
}