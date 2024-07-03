#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next=NULL;
    }
};

void insert_head(Node* &head, int val){
    Node* temp = new Node(val);
    temp->next = head;
    head = temp;
}

void print(Node* &head){
    Node* temp=head;
    
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    Node* n = new Node(23);
    cout<<n->data<<endl;
    cout<<n->next<<endl;

    Node* head = n;
    print(head);
    cout<<endl;
    insert_head(head,34);
    insert_head(head,56);
    print(head);

    return 0;
}