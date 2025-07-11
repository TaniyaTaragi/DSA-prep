#include<iostream>
using namespace std;
void mergesort(int arr[])
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
   mergesort(arr,n);
    cout<<"Elements after insertion sort :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    delete[]arr;
    return 0;
}