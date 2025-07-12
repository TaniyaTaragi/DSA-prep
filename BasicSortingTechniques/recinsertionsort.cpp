#include<iostream>
using namespace std;
void recinsertion(int arr[],int n,int i)
{
      if(i==n) return;
           
           int pivot=arr[i]; 
           int j=i-1;
           while(j>=0&&arr[j]>pivot)
           {
               arr[j+1]=arr[j];
               j--;
              
           }
           arr[j+1]=pivot;
     recinsertion(arr,n,++i);
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
    recinsertion(arr,n,0);
    cout<<"Elements after insertion sort :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    delete[]arr;
    return 0;
}
