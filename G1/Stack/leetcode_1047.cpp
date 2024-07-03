#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s)
{
    string str;
    stack<char> st;

    for (auto i : s)
    {
        if (st.empty())
        {
            st.push(i);
            continue;
        }
        else
        {
            if (i == st.top())
            {
                st.pop();
            }
            else
            {
                st.push(i);
            }
        }
    }

    while (!st.empty())
    {
        str += st.top();
        st.pop();
    }
    reverse(str.begin(), str.end());
    return str;
}

int main()
{
    string s;
    cin >> s;
    cout<<removeDuplicates(s);
    return 0;
}
