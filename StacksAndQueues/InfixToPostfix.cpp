#include<iostream>
#include<stack>
using namespace std;
int precedence(char s)
{
       if(s=='+'||s=='-')
         return 1;
        else if(s=='*'||s=='/')
          return 2;
        else if(s=='^')
          return 3;
            
        return 0;
}


int main()
{
    string s="a*b+c*d";
    stack<char>st;
   
    for(int i=0;i<s.length();i++)
    {
         if(isalnum(s[i]))
            cout<<s[i];
         else if(s[i]=='(')
           st.push(s[i]);
        else if(s[i]==')')
            {
            while((!st.empty())&&(st.top()!='(')){
                cout<<st.top();
                st.pop();
            }
           if(!st.empty())
              st.pop();
          }
       else { 
            while(!st.empty() && st.top()!='(' &&
                  (precedence(st.top()) > precedence(s[i]) ||
                  (precedence(st.top()) == precedence(s[i]) ))) {
                cout << st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
       
     while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
}
