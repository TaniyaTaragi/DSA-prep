//leetcode 71
#include<iostream>
#include<algorithm>
#include<sstring>
#include<sstream>
#include<stack>
using namespace std;
class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
        string token=" ";
        stringstream ss(path);
        while(getline(ss,token,'/'))
        {
            if(token==""||token==".")
            {
                  continue;
            }
            else if(token!="..")
            {
               st.push(token);
            }
            else{
                if(!(st.empty()))
                    st.pop();

              
            }
        }
          if(st.empty())
                 return "/";
        string result="";
        while(!st.empty())
        {
            result="/"+st.top()+result;
            st.pop();
        }
        return result;
    }
};
