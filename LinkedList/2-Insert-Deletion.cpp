
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


// Deleting head in ll;
Node * deletHead(Node* head){

    if( head == NULL) return NULL;

    Node*temp = head;
    head = head ->next;

    delete(temp);
    return head;
}


// Deleting tail in ll;
Node *deletTail(Node *head)
{

    if (head == NULL || head ->next == NULL) return NULL;

    Node *temp = head;
    
    while( temp ->next->next != NULL){
        temp = temp ->next;
    }

    delete temp->next;
    temp ->next = nullptr;
    return head;
}


//deleting nth element
Node* deleteK(Node* head, int k){

    if( head == NULL) return NULL;


    Node* temp = head;
    Node* prev = NULL;
    int indx = 0;

    if(k==1){
        head = head->next;
        delete temp;
        return head;
    };

    while ( temp ){

        indx++;
        if (indx == k)
        {
            prev ->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    
    return head;
}


//inseting head;
Node* newHead(Node*head,int elem){

    Node * temp = new Node(elem,head);  
    return temp;
}


//inserting at end
Node *newTail(Node *head, int elem)
{

    if( head == NULL ){
        return new Node(elem);
    };

    Node *ans = new Node(elem);
    Node*temp = head;

    while(temp ->next){
        temp = temp->next;
    }
    
    temp->next = ans;
    return head;
}


//inserting at nth position
Node* newLL(Node*head , int k,int elem){

    if( head == NULL){
        if (k == 1)
        {
            return new Node(elem);
        }
        else{
            return NULL;
        }
    }
    if (k == 1)
    {
        Node *temp = new Node(elem,head);
        return temp;
    }

    int indx =0;
    Node* temp = head;

    while ( temp ){
        indx ++;

        if( indx == k-1){
            Node *created = new Node(elem);
            created -> next = temp->next;
            temp->next = created;
            break;
        }
        temp = temp->next;
    }
    return head;
}


main()
{

    vector<int> arr = {1, 2, 3, 4, 5};

    Node *head = convert(arr);
    head = newLL(head,1,9);

    Node *temp = head;
    while (temp)
    {
        cout << temp ->data << " ";
        temp = temp->next;
    };
}