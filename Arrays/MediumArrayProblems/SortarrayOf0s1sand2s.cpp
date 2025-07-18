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
 int low=0,mid=0,high=n-1;
        while(mid<=high)
        {
               if(arr[mid]==2)
                   {
                    swap(arr[mid],arr[high]);
                    high--;
                   }
                else if(arr[mid]==1)
                   mid=mid+1;
                else
                  {
                    swap(arr[mid],arr[low]);
                    low++;
                    mid++;
                  }
        }
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
    }