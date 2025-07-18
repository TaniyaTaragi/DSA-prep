#include<iostream>
#include<unordered_map>
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
    unordered_map<int,int>res;
    for(int i=0;i<n;i++)
         res[arr[i]]++;
    unordered_map<int,int>::iterator it=res.begin();
    while(it!=res.end())
    {
         if(it->second> n/2)
            {
                cout<<it->first;
                break;
            }
        it++;
    }


}