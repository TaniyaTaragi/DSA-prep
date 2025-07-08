#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int>res;
    cout<<"Enter the number : ";
    cin>>n;
    int sqt=sqrt(n);
    for(int i=1;i<=sqt;i++)
    {
        if(n%i==0)
         {
            res.push_back(i);
            if(n/i!=i)
              res.push_back(n/i);
         }
    }
    sort(res.begin(),res.end());
    for(int i:res)
     cout<<i<<" ";
}