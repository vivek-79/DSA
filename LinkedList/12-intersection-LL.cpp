
#include <bits/stdc++.h>
using namespace std;

class ListNode
{

public:
    int data;
    ListNode *next;

public:
    ListNode(int data1, ListNode *next1)
    {

        data = data1;
        next = next1;
    }

    ListNode(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

//calculate length of ll
int lengthLL(ListNode* head){

    ListNode*temp = head;

    int cnt =0;
    while(temp){
        cnt++;
        temp = temp->next;
    }

    return cnt;
};

//move pointer to equal horizontal distances
ListNode* moveToEqualPosition(ListNode* head,int n){

    ListNode* temp = head;
    for(int i=0;i<n;i++){
        temp = temp->next;
    }

    return temp;
}

// func to get intersection
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    
    int length1 = lengthLL(headA);
    int length2 = lengthLL(headB);

    ListNode* temp1 =headA;
    ListNode* temp2 =headB;

    if(length1>length2){
        temp1 = moveToEqualPosition(headA,length1-length2);
    };
    if(length1<length2){
        temp2 = moveToEqualPosition(headB,length2-length1);
    };

    while(temp1 && temp2){

        if(temp1 == temp2){
            return temp1;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    };

    return NULL;
};

//converting arr to ListNode
ListNode *convert(vector<int> &arr)
{

    ListNode *head = new ListNode(arr[0]);

    // mover to provide the adress of next data to previous data to form link between them
    ListNode *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {

        ListNode *temp = new ListNode(arr[i]);

        // initializing mover new address of new data
        mover->next = temp;
        mover = temp;
    };
    return head;
}

main()
{

    vector<int> arr1 = {0};
    vector<int> arr2 = {0};

    ListNode *headA = convert(arr1);
    ListNode *headB = convert(arr2);
    ListNode* temp = getIntersectionNode(headA, headB);

    cout << temp->data;
};