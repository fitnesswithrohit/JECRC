#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* tree(node* root){
    int data;
    cin>>data;
    root = new node(data);

    if(data < 0) return NULL;

    cout<<"Left child of: "<<data<<endl<<endl;
    root->left = tree(root->left);
    cout<<"Right child of: "<<data<<endl<<endl;
    root->right = tree(root->right);

    return root;
}

int main(){
    node* root = NULL;

    root = tree(root);

    return 0;
}