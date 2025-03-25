#include <bits/stdc++.h>
using namespace std;

// defining self defined class to create Doubly LL

class Node
{

public:
    int data;
    Node *next;
    Node * prev;

public:
    Node(int data1, Node *next1,Node *prev1)
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

        Node *temp = new Node(arr[i],nullptr,mover);

        // initializing mover new address of new data
        mover->next = temp;
        mover = temp;
    };
    return head;
}


//delete head
Node *deleteHead(Node*head){

    if(head == NULL) return NULL;

    if(!head->next){
        delete head;
        return NULL;
    }

    Node *prev = head;
    head = head->next;
    head ->prev = nullptr;
    prev->next = nullptr;
    return head;
}

//delete tail
Node *deleteTail(Node*head){

    if(head == NULL) return NULL;

    if(!head->next){
        delete head;
        return NULL;
    }

    Node* tail = head;
    while( tail->next ){
        tail = tail->next;
    }
    Node *prev = tail -> prev;
    prev->next = nullptr;
    tail ->prev = nullptr;
    return head;
}


//deleting nth elem
Node *deleteN(Node *head , int k )
{

    Node *temp = head;
    int cnt=0;
    while ( temp )
    {
        cnt++;
        if( cnt == k) break;
        temp = temp->next;
    }

    if(!temp) return head;

    //deleting head 

    if( !temp ->prev ){
        head = head->next;
        if(head)head->prev = nullptr;
    }
    
    //deleting tail
    else if( !temp ->next ){
        temp ->prev->next= nullptr;
    }

    //deleting middle
    else{

        temp ->prev->next = temp->next;
        temp->next->prev = temp ->prev;
    }

    delete temp;
    return  head ;
}


//inserting before nth elem
Node *newlist( Node*head, int k , int val){


    if( head == NULL){

        if( k==1){
            return new Node(val);
        }
        else{
            return NULL;
        }
    };

    if(k==1){
        Node *temp = new Node(val,head,nullptr);
        head->prev = temp;
        return temp;
    };


    int cnt =0;
    Node* temp = head;

    while( temp && cnt<k-1){
        cnt ++;
        temp = temp->next;
    }

    if(! temp) return head;

    Node * created = new Node(val,temp,temp->prev);

    created->prev->next = created;
    temp ->prev = created;
    return head;
}
main()
{

    vector<int> arr = {1, 2, 3, 4, 5};

    Node *head = convert(arr);

    Node *temp = newlist(head,5, 7);
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    };
}