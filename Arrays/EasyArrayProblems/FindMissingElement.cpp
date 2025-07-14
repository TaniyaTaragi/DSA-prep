#include<iostream>
using namespace std;
int main()
{
    //for sorted array
     int n;
     cout<<"enter size of array :";
     cin>>n;
     n--;
     int *arr=new int[n];
     for(int i=0;i<n;i++)
        cin>>arr[i];
        int res=-1;
     for(int i=0;i<n;i++)
     {
         if(arr[i]!=i+1)
         {
            res=i+1;
            break;
         }
          
     }
     if(res==-1)
        cout<<"Missing element is : "<<n+1;
     else
       cout<<"Missing element is : "<<res;
}