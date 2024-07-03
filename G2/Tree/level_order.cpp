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

    cout<<data<<endl<<endl;
    root->left = tree(root->left);
    cout<<data<<endl<<endl;
    root->right = tree(root->right);

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

        if(!temp){
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

int main(){
    node* root = NULL;

    root = tree(root);

    cout<<endl;
    level_order(root);

    return 0;
}