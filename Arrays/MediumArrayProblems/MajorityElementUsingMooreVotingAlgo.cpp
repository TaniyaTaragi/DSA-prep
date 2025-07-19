#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
         cin>>arr[i];
   int count=1,element=arr[0];
   for(int i=0;i<n;i++)
   {
        if(arr[i]==element)
             count++;
        else{
           count--;
            if(count==0)
               {
                   element=arr[i];
                   count++;
               }
         }
   }
   int freq=0;
   for(int i=0;i<n;i++)
   {
     if(arr[i]==element)
         freq++;
   }
   if(freq>n/2)
       cout<<"element is : "<<element;
  else 
    cout<<"element not found";
}