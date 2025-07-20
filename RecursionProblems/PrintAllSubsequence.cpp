#include<iostream>
#include<vector>
using namespace std;
void printsubs(int idx,int arr[],vector<int>&res,int n)
{
      if(idx==n)
       {
           for(int i=0;i<res.size();i++)
           {
                   cout<<res[i]<<" ";
           }
           cout<<endl;
           return;
       }
       res.push_back(arr[idx]);
       printsubs(idx+1,arr,res,n);
       res.pop_back();
       printsubs(idx+1,arr,res,n);
}
int main()
{
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    vector<int>res;
    for(int i=0;i<n;i++)
         cin>>arr[i];
    printsubs(0,arr,res,n);
  
}