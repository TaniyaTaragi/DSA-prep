#include<iostream>
#include<stack>
using namespace std;

class MyQueue {
    stack<int>st;
    stack<int>stt;
public:
   
    MyQueue() {
        
    }
    
    void push(int x) {
       
       while(!st.empty())
        {
             int val=st.top();
             stt.push(val);
             st.pop();
        }
        st.push(x);
       while(!stt.empty())
       {
            st.push(stt.top());
            stt.pop();
       }
        while (!stt.empty()) 
          stt.pop();
       

    }
    
    int pop() {
        int temp=st.top();
        st.pop();
        return temp;
    }
    
    int peek() {
        int temp=st.top();
        return temp;
    }
    
    bool empty() {
        if(st.empty())
           return true;
        else
          return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */