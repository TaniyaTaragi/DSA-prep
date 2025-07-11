#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{
       for(int i=1;i<n;i++)
       {
           
           int pivot=arr[i]; 
           int j=i-1;
           while(j>=0&&arr[j]>pivot)
           {
               arr[j+1]=arr[j];
               j--;
              
           }
           arr[j+1]=pivot;
       }
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
    insertionsort(arr,n);
    cout<<"Elements after insertion sort :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    delete[]arr;
    return 0;
}