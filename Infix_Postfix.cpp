#include<bits/stdc++.h>
using namespace std;

string make_expression(string a ,string b, string op)
{
    string result="";
    result +=b;
    result +=op;
    result +=a;

    return result;
}

bool is_operand(char x)
{
    if (x !='/' && x !='*' && x !='+' && x !='-')
        return true;

    else
        return false;
}

bool is_operator(string x)
{
    if (x =="/" || x =="*" || x =="+" || x =="-")
        return true;

    else
        return false;
}

string infix_to_postfix(string infix)
{
    map <char,int>precedence;
    precedence['/']=4;
    precedence['*']=3;
    precedence['+']=2;
    precedence['-']=1;

    string postfix="";

    stack <char>st;

    for (int i=0; i<infix.size(); i++)
    {
        char now=infix[i];

        if (is_operand(now))
        {
            postfix +=now;
        }

        else
        {
            while(!st.empty() &&(precedence[now] < precedence[st.top()]))
            {
                    postfix +=st.top();
                    st.pop();
            }

            st.push(now);
        }
    }

    while (!st.empty())
    {
        postfix +=st.top();
        st.pop();
    }

    return postfix;
}

string postfix_to_infix(string postfix)
{
    stack <string> st;

    for (int i=0; i<postfix.size(); i++)
    {
        string now="";
        now +=postfix[i];

        if (!is_operator(now))
            st.push(now);

        else
        {
            string a= st.top();
            st.pop();

            string b= st.top();
            st.pop();

            st.push(make_expression(a, b, now));

        }
    }

    return st.top();
}


int main()
{
    cout<<infix_to_postfix("A+B/C*D-E")<<endl;
    cout <<postfix_to_infix("ABCD/E**+X-");

    return 0;
}
