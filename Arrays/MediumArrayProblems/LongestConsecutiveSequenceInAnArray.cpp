#include<iostream>
#include<vector>
#include<unordered_set>
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
    // vector<int>res;
    // for(int i=0;i<n;i++)
    //     res.push_back(arr[i]);
    // sort(res.begin(),res.end());
    // int maxi=-1,count=0;
    // for(int i=n-1;i>0;)
    // {
    //     if(res[i]-1==res[i-1])
    //     {
    //            count++;
    //            if(maxi<count)
    //              maxi=count;
    //     }
         
    //     else
    //           count=0;
    //     i--;
    // }
    // cout<<maxi+1;
    unordered_set<int>temp;
    if(n==0)
      cout<<0;
    if(n==1)
      cout<<1;
    int res=-1;
    for(int i=0;i<n;i++)
       {
          temp.insert(arr[i]);
       }
    for(auto val:temp)
    {
        if(temp.find(val-1)==temp.end())
        {
              int count=1,it=val;
              while(temp.find(it+1)!=temp.end())
              {
                    count++;
                    it=it+1;
              }
             res=max(count,res);
              
        }
       
    }
    cout<<res;
}