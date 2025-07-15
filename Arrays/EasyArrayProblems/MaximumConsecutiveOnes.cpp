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
    int count=0,maxi=0;
    for(int i=0;i<n;i++)
    {
         if(arr[i]==1)
         {
             count++;
            if(maxi<count)
               maxi=count;
         }
        else  if(arr[i]!=1)
               count=0;
     }
          cout<<"maximum ones are : "<<maxi;  
          delete []arr;
    }
 
