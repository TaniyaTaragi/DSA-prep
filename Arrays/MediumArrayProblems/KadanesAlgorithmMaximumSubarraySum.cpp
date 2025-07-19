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
  int sum=0,maxi=-1;
    for(int i=0;i<n;i++)
    {
         sum+=arr[i];
         if(sum>maxi)
            maxi=sum;
         if(sum<0)
           sum=0;
    }
    if(maxi<0)
    {
        maxi=0;
        cout<<"maximum sum is : "<<maxi;
    }
    else
      cout<<"maximum sum is : "<<maxi;
}