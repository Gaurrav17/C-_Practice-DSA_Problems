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

void preorder(struct node *root){
    if(root == 0){
        return;
    }
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node *root){
    if(root == 0){
        return;
    }
    preorder(root->left);
    preorder(root->right);
    cout<<root->data<<endl;
}

void inorder(struct node *root){
    if(root == 0){
        return;
    }
    preorder(root->left);    
    cout<<root->data<<endl;
    preorder(root->right);
}

int main(){
    struct node *root;
    root = 0;
    root = create();
    cout<<"preorder taversal is"<<endl;
    preorder(root);
    cout<<"postorder traversal is"<<endl;
    postorder(root);
    cout<<"inorder traversal is"<<endl;
    inorder(root);
}