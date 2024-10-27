#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *left;
    Node *Right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        Right = NULL;
    }
};

void levelOrderTraversal(Node *root)
{

    queue<Node *> qt;
    qt.push(root);
    while (!qt.empty())
    {
        Node *temp = qt.front();
        cout << temp->data << " ";
        qt.pop();

        if (temp->left)
        {
            qt.push(temp->left);
        }

        if (temp->Right)
        {
            qt.push(temp->Right);
        }
    }
}

void inOrderTraversal(Node* root){

    if(root==NULL){
        return;
    }


   
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->Right);
}

void postOrderTraversal(Node* root){
    
    if(root==NULL){
        return;
    }
    
   
    postOrderTraversal(root->left);
    postOrderTraversal(root->Right);
    cout<<root->data<<" "; 
    
}

void preOrderTraversal(Node* root){
    
    if(root==NULL){
        return;
    }
    
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->Right);
   
    
}


Node *buildTree()
{

    cout << "cout enter the data " << endl;
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    Node *root = new Node(data);
    cout << "Enter the data to the left " << endl;
    root->left = buildTree();
    cout << "Enter the data to the right " << endl;
    root->Right = buildTree();

    return root;
}


int pract(Node* root){

    if(root==NULL){
        return 0;
    }
     int ans = 1 + pract(root->left) + pract(root->Right);

     cout<<ans<<endl; 
     return ans;
}

int main()
{
    Node *root;
    root = buildTree();
    cout<<pract(root)<<endl;
    // levelOrderTraversal(root);

    // cout<<endl;
    // cout<<endl;

    // cout<<"I am done with Level order Now i am goin to in order traversal "<<endl;

    // cout<<endl;
    // cout<<endl;

    // inOrderTraversal(root);


    // cout<<endl;
    // cout<<endl;

    // cout<<"I am done with inOrder order Now i am goin to postorder traversal "<<endl;

    // cout<<endl;
    // cout<<endl;

    // postOrderTraversal(root);

    // cout<<endl;
    // cout<<endl;

    // cout<<"I am done with inOrder order Now i am goin to postorder traversal "<<endl;

    // cout<<endl;
    // cout<<endl;

    // preOrderTraversal(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
}