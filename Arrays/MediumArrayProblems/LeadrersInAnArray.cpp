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
    for(int i=0,j=n-1;i<n;)
    {
        if(arr[i]>arr[j]&&j!=(i+1))
            j--;
        else if((i+1)==j&&arr[i]>arr[j])
        {
            cout<<arr[i]<<" ";
            i++;
             j=n-1;

        }
        else
          {
            i++;
             j=n-1;
          }
    }
    cout<<arr[n-1];
}