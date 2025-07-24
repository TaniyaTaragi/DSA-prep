#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
      int n;
      cout<<"Enter the size of array :";
      cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
         cin>>arr[i];
    // for(int i=0,j=n-1;i<n;)
    // {
    //     if(arr[i]>arr[j]&&j!=(i+1))
    //         j--;
    //     else if((i+1)==j&&arr[i]>arr[j])
    //     {
    //         cout<<arr[i]<<" ";
    //         i++;
    //          j=n-1;

    //     }
    //     else
    //       {
    //         i++;
    //          j=n-1;
    //       }
    // }
    // cout<<arr[n-1];
    int maxval=arr[n-1];
    vector<int>res;
    res.push_back(maxval);

    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>maxval)
          {
              res.push_back(arr[i]);
              maxval=arr[i];
          }
    }
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    
}