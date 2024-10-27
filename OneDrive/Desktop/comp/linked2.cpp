#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void printList(Node *head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << endl;

        temp = temp->next;
    }
}

void insertAtHead(Node *&head, int n)
{
    Node *nnode = new Node(n);
    nnode->next = head;
    head = nnode;
}

void insertAfterHead(Node *&Head, int n)
{
    Node *nnode = new Node(n);

    Node *Temp = Head;

    while (Temp->next != NULL)
    {
        Temp = Temp->next;
    }

    Temp->next = nnode;
}

void insertAtPos(Node *&head, int pos, int data)
{

    Node *temp = head;
    int i = 1;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    Node *nnode = new Node(data);
    Node *st;
    nnode->next = temp->next;
    temp->next = nnode;
}

void deleteAtpos(Node* &head, int n)
{
    Node *temp = head;
    int i = 1;
    Node *prev;
    while (i < n)
    {
        prev = temp;
        temp = temp->next;
        i++;
    }
    prev->next = temp->next;
    free(temp);
}

void deleteAtHead(Node* &head)
{
    Node* temp = head;
    head = head->next;
    free(temp);
}

void deleteBydata(Node* &head, int n){
    
    Node* temp = head;
    Node* prev;

    while(temp->data != n){
        prev = temp;
        temp = temp->next;
    }

}

int main()
{
    Node *node = new Node(10);
    Node *head = node;
    int s = 12;
    insertAtHead(head, 12);
    insertAfterHead(head, 15);
    insertAtPos(head, 3, 17);
    deleteAtpos(head, 2);
    deleteAtHead(head);
    deleteBydata(head, 17);
    printList(head);
}