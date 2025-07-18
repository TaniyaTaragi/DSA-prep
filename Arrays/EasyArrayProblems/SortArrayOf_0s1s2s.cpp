#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
       int n;
      cout<<"Enter the size of array :";
      cin>>n;
      int *arr=new int[n];
      for(int i=0;i<n;i++)
      {
        cin>>arr[i];
      }
      int left=0,mid=0,right=n-1;
      while(mid<=right)
      {
           if(arr[mid]==2)
           {
               swap(arr[mid],arr[right]);
               right--;
           }
           else if(arr[mid]==0)
           {
                 swap(arr[mid],arr[left]);
                 mid++;
                 left++;
           }
           else
           {
                  mid++;
           }
      }
  for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";
}