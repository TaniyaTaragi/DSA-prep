#include<iostream>
using namespace std;
int main()
{
int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
       cin>>arr[i];
    int target,index=-1;
    cout<<"Enter the value to find :";
    cin>>target;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
           {
              index=i;
              break;
           }
    }
    if(index==-1)
      cout<<"value not found";
    else
      cout<<"value is at index :"<<index;
}