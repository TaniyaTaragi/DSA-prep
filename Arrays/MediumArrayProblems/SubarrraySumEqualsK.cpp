#include<algorithm>
#include<iostream>
#include<unordered_map>
using namespace std;

int subarraysum(int arr[], int k,int n) {
        int prefix=0,count=0;
        unordered_map<int,int>res;
        res[0]=1;
      for(int i=0;i<n;i++)
      {
            prefix+=arr[i];
            int remove=prefix-k;
            count+=res[remove];
            res[prefix]=res[prefix]+1;
      }
      return count;
    }
int main()
{
      int n,k;
      cout<<"Enter the size of array :";
      cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
         cin>>arr[i];
    cout<<"enter target:";
    cin>>k;
    int res=subarraysum(arr,k,n);
    cout<<"ans is : "<<res;

};