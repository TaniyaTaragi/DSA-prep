#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int temp=num,rev=0;
    while(temp>0)
    {
        int rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    cout<<"Reverse is : "<<rev;
}