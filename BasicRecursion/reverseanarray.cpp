#include<iostream>
using namespace std;
void reversearray(int arr[],int i,int n)
{
    if(i>=n/2) return ;
    swap(arr[i],arr[n-i-1]);
    i++;
    reversearray(arr,i,n);
}
int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter the elements :";
    for(int i=0;i<n;i++)
    {
         cin>>arr[i];
    }
    reversearray(arr,0,n);
    cout<<"Elements are : ";
    for(int i=0;i<n;i++)
    {
         cout<<arr[i]<<" ";
    }
}