// #150 Evaluate Reverse Polish Notation

#include <bits/stdc++.h>

using namespace std;

int evalRPN(vector<string> &tokens)
{
    stack<int> st;
    int op1, op2, size;
    string ops = "+-*/";
    size = tokens.size();
    for (auto c : tokens)
    {
        if (ops.find(c) != string::npos)
        {
            op2 = st.top();
            st.pop();
            op1 = st.top();
            st.pop();

            if (c == "+")
                st.push(op1 + op2);
            else if (c == "-")
                st.push(op1 - op2);
            else if (c == "*")
                st.push(op1 * op2);
            else if (c == "/")
                st.push(op1 / op2);
        }
        else
        {
            int temp = stoi(c);
            st.push(temp);
        }
    }
    return st.top();
}