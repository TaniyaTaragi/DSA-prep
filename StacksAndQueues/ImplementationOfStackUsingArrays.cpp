#include<iostream>
using namespace std;
void push(int item,int stack[],int &top)
{
        if(top==9){
            cout<<"stack overflow ";
            return;
        }
        top++;
        stack[top]=item;
        cout<<"item inserted !!!"<<endl;
}
void pop(int stack[],int &top)
{
     if(top==-1)
       {
          cout<<"stack underflow ";
          return;
       }
    top--;
    cout<<"Element popped out "<<endl;
}
void printtop(int &top,int arr[])
{
      cout<<"value at top is : "<<arr[top]<<endl;
}
void display(int arr[],int &top)
{
     if(top==-1)
        cout<<"stack is empty ";
    else{
           for(int i=top;i>=0;i--)
           cout<<arr[i]<<endl;
    }
     
}
int main()
{
    int stack[10],top=-1;
    push(5,stack,top);
    push(10,stack,top);
    pop(stack,top);
    push(12,stack,top);
    push(15,stack,top);
    printtop(top,stack);
    display(stack,top);
}
