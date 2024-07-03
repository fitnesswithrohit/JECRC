// Base Case, Recursive relation, call stack, tree, processing(++,cout,--)


#include<bits/stdc++.h>
using namespace std;

int sum_natural(int n){
    if(n==0) return 0;

    // if(n==1) return 1;

    int cp = sum_natural(n-1);
    int bp = n + cp;
    return bp;
}

int power_2(int n){
    if(n==0) return 1;

    int cp = power_2(n-1);
    int bp = 2 * cp;
    return bp;
}

int factorial(int n){
    if(n==0) return 1;

    int cp = factorial(n-1);
    int bp = n * cp;
    return bp;

    // return n*factorial(n-1);
}

int fibonacci_series(int n) 
{ 
    if (n ==0 || n==1) 
        return n; 
    return fibonacci_series(n - 1) + fibonacci_series(n - 2); 
} 

int main(){
    int n;
    cin>>n;

    // cout<<factorial(n)<<endl;
    // cout<<power_2(n)<<endl;
    // cout<<sum_natural(n)<<endl;
    cout<<fibonacci_series(n);

    return 0;
}