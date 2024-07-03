#include <bits/stdc++.h>
using namespace std;

double myPow(double x, int n)
{
    if (n == 0)
        return 1;

    if (n < 0)
    {
        n = abs(n);
        x = 1 / x;
    }

    if (n % 2 == 0)
    {
        return myPow(x * x, n / 2);
    }
    else
    {
        return x * myPow(x * x, (n - 1) / 2);
    }
}

int main()
{
    int n;
    double x;
    cin >> x >> n;

    cout<<myPow(x,n);
    return 0;
}