#include<iostream>
using namespace std;
void merge(int arr[],int low,int mid,int high)
{
         
          int arr1[high+1];
          int i=low,j=mid+1,k=low;
          while(i<=mid&&j<=high)
          {
             if(arr[i]<arr[j])
                 arr1[k++]=arr[i++];
            else
                arr1[k++]=arr[j++];
            }
          while(i<=mid)
          {
            arr1[k++]=arr[i++];
          }
          while(j<=high)
          {
                  arr1[k++]=arr[j++];
          }
          for(int i=low;i<=high;i++)
          {
                  arr[i]=arr1[i];
          }
          

}
void mergesort(int arr[],int low,int high)
{
      if(low<high)
        {
            int mid=low+(high-low)/2;
            mergesort(arr,low,mid);
            mergesort(arr,mid+1,high);
            merge(arr,low,mid,high);
        }
}
int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    cout<<"order of elements after merge sort :";
     mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}