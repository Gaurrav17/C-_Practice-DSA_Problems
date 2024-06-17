#include<iostream>
using namespace std;


struct node{
    int data;
    struct node *left, *right;
};

struct node *newnode;



struct node *create(){
    int x;
    newnode = new node();
    cout<<"ENTER DATA(-1  for no node)"<<endl;
    cin>>x;
    if(x == -1){
        return 0;
    }
    newnode->data = x;
    cout<<"ENTER THE LEFT CHILD OF"<<x<<endl;
    newnode->left = create();
    cout<<"ENTER THE RIGHT CHILD OF"<<x<<endl;
    newnode->right = create();
    return newnode;
}

int main(){
    struct node *root;
    root = create();
}