#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *Next;
    Node *Prev;

    Node(int data)
    {
        this->data = data;
        this->Next = NULL;
        this->Prev = NULL;
    }
};

void printList(Node *head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << endl;

        temp = temp->Next;
    }
}

void getLength(Node *head)
{

    Node *temp = head;

    int count = 0;

    while (temp != NULL)
    {

        temp = temp->Next;
        count++;
    }

    cout << "Your Length of the linked list is " << count << endl;
}

void insertAtHead(Node *&head, int data)
{

    // Node* temp = head;

    Node *node = new Node(data);

    head->Prev = node;

    node->Next = head;

    head = node;
}

void insertAtTail(Node *&tail, int n)
{
    Node *node = new Node(n);

    tail->Next = node;

    node->Prev = tail;

    tail = node;
}

void insertAtPos(Node *&head, int data, int pos)
{

    Node *node = new Node(data);

    int i = 1;
     
     Node* temp = head;
    while(i<pos-1){
       temp = temp->Next;
    }
    
    node->Prev = temp;
    node->Next = temp->Next;
    temp->Next->Prev = node;
    temp->Next = node;

}

void deleteAtHead(Node* &head){

     Node* Temp  = head;

     head = head->Next;
     head->Prev = NULL;
     free(Temp);


}

int main()
{

    Node *head = NULL;
    Node *node = new Node(12);  // If you dont have any element than you have to handle this case carefully We have t
                                // to chek the condition whether head is null or not
    head = node;


    Node *tail = node;       //You have to handle same case for tail also
    getLength(head);
    insertAtHead(head, 14);
    insertAtHead(head, 19);
    insertAtTail(tail, 20);
    insertAtPos(head, 17, 2);
    deleteAtHead(head);
    printList(head);
}