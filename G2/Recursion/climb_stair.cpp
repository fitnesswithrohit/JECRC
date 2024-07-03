#include <bits/stdc++.h>
using namespace std;

int climbStairs(int i, int n)
{
    if (n < 0)
        return 0;
    if (i <= n)
        return n;

    return climbStairs(i+1,n) + climbStairs(i+2,n);
}

int climbStairs(int n)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;

    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main()
{
    int n;
    cin >> n;
    int i=0;
    cout << climbStairs(i,n);
    return 0;
}