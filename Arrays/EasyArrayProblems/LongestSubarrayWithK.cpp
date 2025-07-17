#include<iostream>
using namespace std;
int main()
{
       int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int *arr=new int [n];
    cout<<"Enter the elements of array :";
    for(int i=0;i<n;i++)
       cin>>arr[i];
    int k;
     cout<<"Enter target sum : ";
     cin>>k;
     int left=0,right=0,sum=arr[0],maxlen=0;
     while(right<n)
     {
        if(sum>k&&left<=right)
           {
               sum-=arr[left];
               left++;
           }
        if(sum==k)
          maxlen=right-left+1;
        right++;
        if(right<n)
          sum+=arr[right];
     }
     cout<<"length is : "<<maxlen;
}