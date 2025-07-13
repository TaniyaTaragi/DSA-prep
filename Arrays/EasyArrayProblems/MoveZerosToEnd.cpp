#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
       cin>>arr[i];
    //brute-force approach
    // int res[n]={0};
    // for(int i=0,j=0;i<n;i++)
    // {
    //      if(arr[i]!=0)
    //        {
    //           res[j]=arr[i];
    //           j++;
    //        }
    // }
    // for(int i=0;i<n;i++)
    //    cout<<res[i]<<" ";
    //time-complexity O(n)  space-complexity O(n)

    //Optimal-approach

    for(int i=0,j=1;j<n;)
    {
          if(arr[i]==0)
          {
             if(arr[j]!=0)
             {
                swap(arr[i],arr[j]);
               
             }
               
            else if(arr[j]==0)
            {
                i--;
            }
          }
       i++;
       j++;
    }
     for(int i=0;i<n;i++)
       cout<<arr[i]<<" ";

    //time complexity o(n) space complexity o(1)
}