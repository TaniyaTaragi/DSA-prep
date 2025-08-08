#include<iostream>
using namespace std;
class queuee{
    int queue[10];
    int front;
    int rear;
    public:
    queuee() {
        front=-1;
        rear=-1;
    }
    void push(int item)
    {
        if(rear==9)
          {
            cout<<"queue is full "<<endl;
            return ;
          } 
        else if(front==-1)
        {
             front++;
             rear++;
             queue[rear]=item;
             cout<<"element inserted!!!"<<endl;
        }      
        else{
             rear++;
             queue[rear]=item;
              cout<<"element inserted!!!"<<endl;
        }
    }
    void pop()
    {
        if(front==-1||front>rear)
           {
              cout<<"queue is empty "<<endl;
              return;
           }
        else{
            front++;
             cout<<"element removed!!!"<<endl;
        }
    }
    void size()
    {
        if(front==-1||front>rear)
        {
             cout<<"Size is 0 ";
             return;
        }
        cout<<"size is : "<<(rear-front+1)<<endl;
    }
    void top()
    {
         if(front==-1||front>rear)
          {
             cout<<"queue is empty ";
             return;
          }
         cout<<"top element is : "<<queue[front]<<endl;
    }
    void display()
    {
         if(front==-1||front>rear)
          {
             cout<<"queue is empty "<<endl;
             return;
          }
          else{
             for(int i=front;i<=rear;i++)
             {
                  cout<<queue[i]<<endl;
             }
          }
    }
};
int main()
{
    queuee obj;
    obj.push(10);
     obj.push(1);
      obj.push(8);
      obj.pop();
       obj.push(6);
        obj.pop();
         obj.pop();
       obj.top();
       obj.size();
       obj.push(2);
       obj.display();
}
