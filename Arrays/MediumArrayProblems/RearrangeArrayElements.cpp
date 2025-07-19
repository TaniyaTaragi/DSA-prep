#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
      int n;
      cout<<"Enter the size of array :";
      cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
         cin>>arr[i];
    vector<int>res(n);
    int posi=0,negi=1;
   for(int i=0;i<n;i++)
   {
       if(arr[i]>0){
         res[posi]=arr[i];
         posi+=2;
       }
       else{
          res[negi]=arr[i];
          negi+=2;
       }
     
   }
   for(int i=0;i<n;i++)
      cout<<res[i]<<" ";
}