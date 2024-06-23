#include <bits/stdc++.h>
using namespace std;
// morning logic legends //input

// legends logic morning //output

// Method-1
// string reverseWords(string s)
// {
//     s += " ";
//     string ans = "";
//     stack<string> st;
//     int n = s.size();
//     string str = "";

//     for (int i = 0; i < n; i++)
//     {
//         if (s[i] == ' ')
//         {
//             if (str.size() > 0)
//             {
//                 st.push(str);
//             }
//             str = "";
//         }
//         else
//         {
//             str += s[i];
//         }
//     }

//     while (!st.empty())
//     {
//         ans += st.top();
//         st.pop();
//         if (st.size() > 0)
//             ans += " ";
//     }

//     return ans;
// }

// Method-2
string reverseWords(string s)
{
    int n = s.size();
    stack<string> st;
    string str = "";

    // "Evening2 logic legends"

    for (int i = 0; i < n; i++)
    {
        if (isalpha(s[i]) || isdigit(s[i]))
        {
            str += s[i];
        }
        else
        {
            if (str.size() > 0)
            {
                st.push(str);
            }
            str = "";
        }
        

        if (i == n - 1 && str.size() > 0)
        {
            st.push(str);
            str = "";
        }
    }
    while (!st.empty())
    {
        str += st.top();
        st.pop();
        if (st.size() > 0)
        {
            str += " ";
        }
    }
    return str;
}

int main()
{
    string s = "morning logic legends";
    // legends logic morning;

    cout << reverseWords(s);
    return 0;
}