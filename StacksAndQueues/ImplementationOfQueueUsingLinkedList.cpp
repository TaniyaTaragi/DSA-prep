#include<iostream>
using namespace std;
struct node{
    int value;
    node*next;
    node(int val)
    {
         value=val;
         next=nullptr;
    }
};
class queue{
    node*front;
    node*rear;
    int sizee=0;
    public:
    queue(){
        front=nullptr;
        rear=nullptr;
    }
    void push(int item)
    {
         node *newnode=new node(item);
         if(front==nullptr)
         {
             front=newnode;
             rear=newnode;
             cout<<item<<" "<<"inserted"<<endl;
             sizee++;
         }
         else{
              rear->next=newnode;
              rear=newnode;
              sizee++;
              cout<<item<<" "<<"inserted"<<endl;
         }
    }
    void pop()
    {
         if(front==nullptr)
         {
            cout<<"queue is empty "<<endl;
            return;
         }
         node*temp=front;
         front=front->next;
         cout<<temp->value<<" "<<"deleted"<<endl;
         sizee--;
         delete temp;
    }
    void peek()
    {
         if(front==nullptr)
         {
             cout<<"queue is empty "<<endl;
             return;
         }
         cout<<"top element is : "<<front->value<<endl;
    }
    void size()
    {
           cout<<"size is : "<<sizee;
    }
    void display()
    {
         if(front==nullptr)
            {
                cout<<"queue is empty "<<endl;
                return;
            }
            node*q=front;
        while(q!=nullptr)
        {
             cout<<q->value<<" ";
             q=q->next;
        }
        cout<<endl;
    }
};
int main()
{
    queue obj;
    obj.push(5);
     obj.push(4);
      obj.push(1);
      obj.pop();
       obj.push(6);
       obj.pop();
       obj.peek();
        obj.push(5);
         obj.push(5);
         obj.display();
}
