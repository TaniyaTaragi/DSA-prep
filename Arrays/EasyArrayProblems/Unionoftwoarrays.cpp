#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter size of array1 : ";
    cin>>n;
    int *arr1=new int[n];
    for(int i=0;i<n;i++)
         cin>>arr1[i];
    cout<<"enter size of array 2 :";
    cin>>m;
  int *arr2=new int[m];
   for(int i=0;i<m;i++)
       cin>>arr2[i];
 vector<int>res3;
 int i=0,j=0;
 while(i<n&&j<m)
 {
      if(arr1[i]==arr2[j])
      {
        if(res3.empty()|| res3.back()!=arr1[i])
           res3.push_back(arr1[i]);
        i++;
        j++;
      }
      else if(arr1[i]<arr2[j])
      {
          if( res3.back()!=arr1[i])
              res3.push_back(arr1[i]);
        i++;
      }
      else{
         if( res3.back()!=arr2[j])
             res3.push_back(arr2[j]);
        j++;
      }
 } 
 while(i<n)
 {
     if( res3.back()!=arr1[i])
          res3.push_back(arr1[i]);
    i++;
 }
 while(j<m)
 {
     if(res3.back()!=arr2[j])
             
     
      res3.push_back(arr2[j]);
    j++;
 }
for(int val:res3)
{
     cout<<val<<" ";
}
}