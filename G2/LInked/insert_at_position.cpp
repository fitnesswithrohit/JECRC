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

void insert_tail(Node* &tail, int val){
    Node* temp = new Node(val);
    tail->next=temp;
    tail = temp;
}

void insert_pos(Node* &head, int pos, int val){
    Node* temp = head;
    int count=1;
    for(;count<pos-1;count++){
        temp=temp->next;
    }

    Node* new_node = new Node(val);
    new_node->next = temp->next;
    temp->next = new_node;
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
    // cout<<n->data<<endl;
    // cout<<n->next<<endl;

    Node* head = n;
    Node* tail = n;
    print(head);
    cout<<endl;

    insert_tail(tail,45);
    print(head);
    cout<<endl;
    insert_tail(tail,21);
    print(head);
    cout<<endl;

    insert_pos(head,3,50);
    print(head);

    return 0;
}