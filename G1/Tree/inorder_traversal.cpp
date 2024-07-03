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

    root->left = tree(root->left);
    root->right = tree(root->right);
    cout<<data<<endl<<endl;
    cout<<data<<endl<<endl;

    return root;
}

void level_order(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        node* temp = q.front();
        // cout<<temp->data<<" ";
        q.pop();
        // if(temp->left){
        //     q.push(temp->left);
        // }

        // if(temp->right){
        //     q.push(temp->right);
        // }

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void preorder_travers(node* root){ // P-L-R
    if(root == NULL) return;

    cout<<root->data<<" ";
    preorder_travers(root->left);
    preorder_travers(root->right);
}

void inorder_travers(node* root){ // L-P-R
    if(root == NULL) return;

    inorder_travers(root->left);
    cout<<root->data<<" ";
    inorder_travers(root->right);
}

void postorder_travers(node* root){ // L-R-P
    if(root == NULL) return;

    postorder_travers(root->left);
    postorder_travers(root->right);
    cout<<root->data<<" ";
}

int main(){
    node* root = NULL;

    root = tree(root);

    cout<<endl;
    level_order(root);
    cout<<"Inorder: ";
    inorder_travers(root);
    cout<<endl;

    cout<<"Preorder: ";
    preorder_travers(root);
    cout<<endl;

    cout<<"Postorder: ";
    postorder_travers(root);

    // 1 7 11 -1 -1 13 -1 -1 9 17 -1 -1 -1

    return 0;
}