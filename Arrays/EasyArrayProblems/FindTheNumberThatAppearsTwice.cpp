#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int n,xori=0;
    cout<<"Enter the size of array :";
    cin>>n;
    int *arr=new int [n];
    cout<<"Enter the elements of array :";
    for(int i=0;i<n;i++)
       cin>>arr[i];
   //  unordered_map<int,int>res;
   //  for(int i=0;i<n;i++)
   //     res[arr[i]]++;
   //  unordered_map<int,int>::iterator it=res.begin();
   //  for(it=res.begin();it!=res.end();it++)
   //  {
   //         if(it->second==1)
   //          cout<<"element is : "<<it->first;
   //  }

    //optimal-soln
 
    for(int i=0;i<n;i++)
    {
         xori=xori^arr[i];
    }
     cout<<"Element is : "<<xori;

     //time-complexity O(n) space-complexity O(1)



}