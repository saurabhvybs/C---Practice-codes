//CONVERSION OF ARRAY INTO LINKED LIST AND ITS TRAVERSAL

#include <iostream>
#include<vector>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1)   // CONSTRUCTOR
    {
        data = data1;
        next = nullptr;
    }
};

Node* convert_arr_2_LL(vector<int>&arr){
    Node *head  = new Node(arr[0]);  // ATTOTING MEMORY TO FIRST ELEMENT AND THIS SHALL NEVER CHANGE
    Node *mover =head;   //MOVER ALSO POINTING TO HEAD MEMORY
    for(int i=1;i<arr.size();i++){
        Node *temp= new Node(arr[i]);
        mover->next =temp;            //CHANGING MEMORY OF HEAD NEXT AS TEMP MEMORY
        mover =temp;           // NOW MOVER WILL POINT TO NULL AS TEMP HAS NULL AS ITS NEXT.
    }
    return head;
};
void print(Node *temp){
    while(temp){
    cout<<temp->data<<" "<<temp->next<<" ";
    temp=temp->next;    // STORING NEXT ADDRESS IN TEMP AND CHECK IF IT IS TRUE.
    }
};

Node* remove_head(Node *head){
    if(head==NULL)
    {
        return head;
    }
    
    Node* temp=head;  //just taking temp so that we can free this space up.
    head=head->next;      // memory of head changed now it will start from second node
    delete temp;   // memory freed for previous head from heap.
    return head;
}

int main(){
    vector<int>arr={2,12,13,5,100};
    Node *head=convert_arr_2_LL(arr);   // converting arr to LL
    head=remove_head(head);                //removing the head of the linked list
    print(head);                       //
    return 0;

}