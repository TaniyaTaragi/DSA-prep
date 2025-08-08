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
class stackk{
        node *top;
        int sizee=0;
        public:
        stackk()
        {
            top=nullptr;
        }
        void push(int item)
        {
              node *newnode=new node(item);
              newnode->next=top;
              top=newnode;
              cout<<item<<" "<<"is pushed "<<endl;
              sizee++;
        }
        void pop()
        {
            if(top==nullptr)
            {
                 cout<<"stack is empty "<<endl;
                 return;
            }
            node* temp=top;
            cout<<"value deleted : "<<temp->value<<endl;
            sizee--;
            top=top->next;
            delete temp;

        }
        void peek()
        {
            if(top==nullptr)
            {
                cout<<"stack is empty "<<endl;
                return;
            }
            cout<<"top element is  : "<<top->value<<endl;
        }
        void size()
        {
            cout<<"size is :"<<sizee<<endl;
        }
        void display()
        {
            node*q=top;
            while(q!=nullptr)
            {
                 cout<<q->value<<" ";
                 q=q->next;
            }
            cout<<endl;
        }
        ~stackk() {
    while (top != nullptr) {
        pop();
    }
}
};
int main()
{
    stackk obj;
    obj.push(10);
    obj.push(14);
    obj.push(1);
    obj.pop();
    obj.push(9);
    obj.display();
    obj.push(12);
    obj.peek();
    
}
