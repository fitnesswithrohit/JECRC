#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    for (auto i : s)
    {
        if (st.size() == 0)
        {
            st.push(i);
        }
        else
        {
            if (i == ')')
            {
                if (st.top() != '(')
                    return false;
                st.pop();
            }
            else if (i == ']')
            {
                if (st.top() != '[')
                    return false;
                st.pop();
            }
            else if (i == '}')
            {
                if (st.top() != '{')
                    return false;
                st.pop();
            }
            else
            {
                st.push(i);
            }
        }
    }
    if (st.size())
        return false;
    return true;
}

int main()
{
    string s;
    cin >> s;

    bool valid = isValid(s);
    if (valid)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}
