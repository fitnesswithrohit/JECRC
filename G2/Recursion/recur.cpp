#include <bits/stdc++.h>
using namespace std;

void dis(int hostel, int mes)
{
    cout << hostel << "-" << mes << endl;
    if (hostel == mes)
    {
        cout << "reached";
        return;
    }

    // hostel++;
    dis(++hostel, mes);
}

int main()
{
    int hostel, mes;
    cin >> hostel >> mes;

    dis(hostel, mes);
    return 0;
}

