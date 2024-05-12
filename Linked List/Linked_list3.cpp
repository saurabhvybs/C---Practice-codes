// CONVERSION OF ARRAY INTO LINKED LIST AND ITS deletion of its head.

#include <iostream>
#include <vector>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1) // CONSTRUCTOR
    {
        data = data1;
        next = nullptr;
    }
};

Node *convert_arr_2_LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]); // ATTOTING MEMORY TO FIRST ELEMENT AND THIS SHALL NEVER CHANGE
    Node *mover = head;            // MOVER ALSO POINTING TO HEAD MEMORY
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp; // CHANGING MEMORY OF HEAD NEXT AS TEMP MEMORY
        mover = temp;       // NOW MOVER WILL POINT TO NULL AS TEMP HAS NULL AS ITS NEXT.
    }
    return head;
};
void print(Node *temp)
{
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next; // STORING NEXT ADDRESS IN TEMP AND CHECK IF IT IS TRUE.
    }
};
Node *remove_kth(Node *head, int k)
{
    if (head == NULL)
    {
        return head;
    }
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int count = 0;
    Node *temp = head;
    Node *prev = NULL;
    while(temp != NULL){
        count++;
        if(count==k){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {2, 12, 13, 5, 100};
    Node *head = convert_arr_2_LL(arr);
    head=remove_kth(head,3);
    print(head);
    return 0;
}