#include<iostream>
using namespace std;
class stackk{
    int top;
    int stack[10];
    public:
    stackk()
    {
        top=-1;
    }
      void push(int item)
    {
            if(top==9){
            cout<<"stack overflow ";
            return;
        }
        top++;
        stack[top]=item;
        cout<<"item inserted !!!"<<endl;
    }
    void pop()
{
     if(top==-1)
       {
          cout<<"stack underflow ";
          return;
       }
    top--;
    cout<<"Element popped out "<<endl;
}
  void printtop()
{
      cout<<"value at top is : "<<stack[top]<<endl;
}
void display()
{
     if(top==-1)
        cout<<"stack is empty ";
    else{
           for(int i=top;i>=0;i--)
           cout<<stack[i]<<endl;
    }
     
}      
};
int main()
{
    stackk obj;
    obj.push(8);
    obj.push(2);
    obj.push(1);
    obj.push(5);
    obj.pop();
    obj.pop();
    obj.display();
}
