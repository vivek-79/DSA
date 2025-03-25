
#include<bits/stdc++.h>
using namespace std;


// defining self defined class to create LL

class Node {

    public:

    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){

        data = data1;
        next = next1;
    }

    Node( int data1){
        data = data1;
        next = nullptr;
    }
};


//function to conert array to LL

Node* convert ( vector<int>&arr){

    Node* head = new Node(arr[0]);

    //mover to provide the adress of next data to previous data to form link between them
    Node* mover = head;

    for(int i=1;i<arr.size();i++){

        Node* temp = new Node(arr[i]);

        //initializing mover new address of new data
        mover -> next = temp;
        mover = temp;
    };
    return head;
}


// searching in ll;

int check ( Node *head,int val){

    Node *temp = head;

    while (temp)
    {
        if (temp->data == val)
            return 1;
        temp = temp->next;
    };
    return 0;
};


main(){

    vector<int> arr = {1,2,3,4,5};

    Node*ans= convert(arr);
    
    //traversing in LL
    Node* temp = ans;
    // while(temp){
    //     cout<< temp ->data << " ";
    //     temp = temp ->next;
    // };

    //searching in LL;
    cout << check (ans,13);
    
}