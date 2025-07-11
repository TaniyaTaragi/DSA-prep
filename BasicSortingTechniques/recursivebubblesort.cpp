#include<iostream>
using namespace std;
void recbubble(int arr[],int j,int n)
{
    if(j==n-1) return;
     for(int i=0;i<n-j-1;i++)
     {
             if(arr[i]>arr[i+1])
               swap(arr[i],arr[i+1]);
     }

    recbubble(arr,++j,n);
    
}
int main()
{
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
         cin>>arr[i];
    }
    cout<<"Elements after recursive bubble sort :";
    recbubble(arr,0,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}