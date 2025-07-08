#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number :";
    cin>>num;
    int sqt=sqrt(num),count=0;
    for(int i=1;i<=sqt;i++)
    {
        if(num%i==0)
        {
            count++;
            if(num/i!=i)
              count++;
        }
    }
  if(count==2)
    cout<<"prime number ";
  else
   cout<<"Not a prime number";

}