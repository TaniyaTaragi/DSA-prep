#include<iostream>
using namespace std;
int main()
{
      int n;
      cout<<"Enter the size of array :";
      cin>>n;
      //if n==0 || n==1 return true
      int *arr=new int[n];

      for(int i=0;i<n;i++)
      {
        cin>>arr[i];
      }
      int first=arr[0],last=arr[n-1],res=0;
      if(first<=last)
      {
        for(int i=0;i<n-1;i++)
        {
          if(arr[i]>arr[i+1])
          {
             res=1;
             break;
          }
               
        }
        if(res==1)
          cout<<"array is not sorted";
        else 
         cout<<"array is sorted";
      }
      else{
          for(int i=i;i<n-1;i++)
        {
          if(arr[i]<arr[i+1])
          {
             res=1;
             break;
          }
               
        }
        if(res==1)
          cout<<"array is not sorted";
        else 
         cout<<"array is sorted";
      }
}