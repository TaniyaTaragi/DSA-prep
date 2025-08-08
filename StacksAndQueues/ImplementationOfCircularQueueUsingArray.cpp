#include<iostream>
using namespace std;
#define MAX 10
class circularqueue{
    int front;
    int rear;
    int queue[MAX];
    public:
    circularqueue(){
        front=-1,rear=-1;
    }
    void push(int item)
    {
    if((rear+1)%MAX==front)
           {
             cout<<"queue is full ";
             return;
           }
       else if(front==-1)
        {
             front=0;
             rear=0;
        }
      else
        rear=(rear+1)%MAX;

    queue[rear]=item;
    cout<<"Item inserted !!! "<<endl;
        
    }
    void pop()
    {
        if(front==-1)
          {
             cout<<"queue is empty "<<endl;
             return;
          }
        else if(front==rear)
        {
             front=-1;
             rear=-1;
        }
        else
         front=(front+1)%MAX;
    }
    void top()
    {
          if(front==-1)
          {
             cout<<"queue is empty "<<endl;
             return;
          }
          cout<<"top element is : "<<queue[front];
    }
    void size()
    {
         if(front==-1)
          {
             cout<<"queue is empty "<<endl;
             return;
          }
          cout<<"Size is : "<<((rear-front+MAX)%MAX+1)<<endl;
    }  
    void display()
    {
       if(front==-1)
          {
             cout<<"queue is empty "<<endl;
             return;
          }
        int i=front;
        while(true)
        {
             cout<<queue[i]<<" ";
             if(i==rear)break;
             i=(i+1)%MAX;
        }
        
    }
};
int main()
{
     circularqueue obj;
     obj.push(10);
     obj.push(8);
     obj.push(1);
     obj.size();
     obj.pop();
     obj.push(5);
     obj.push(12);
     obj.pop();
     obj.push(6);
     obj.size();
     obj.pop();
     obj.display();
}
