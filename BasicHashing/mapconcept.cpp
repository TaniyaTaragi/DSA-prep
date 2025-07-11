#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cout<<"Enter the size :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
  
    unordered_map<int,int>freq;
    for(int i=0;i<n;i++)
    {
         freq[arr[i]]++;
    }
    for(auto it:freq)
       cout<<it.first<<" "<<it.second<<endl;
         cout<<"Enter queries size :";
    cin>>q;
   while(q--)
   {
        int query;
        cin>>query;
        cout<<"No of times it appear is : "<<freq[query]<<endl;
   }
}