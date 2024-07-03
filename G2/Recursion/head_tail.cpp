#include<bits/stdc++.h>
using namespace std;
//head
void print_h(int n){
    if(n==0) return ; // base 

    print_h(n-1); // recursive function/logic

    cout<<n<<endl; // process
}

// tail
void print_t(int n){
    if(n==0) return ; // base codition

    cout<<n<<endl; //process
    print_t(n-1); // recursive function
}

int main(){
    int n;
    cin>>n;
    cout<<endl;
    print_h(n);
    cout<<endl;
    print_t(n);
    return 0;
}