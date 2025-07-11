#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minindex=i;
        for(int j=i+1;j<n;j++)
        {
             if(arr[j]<arr[minindex])
                minindex=j;
        }
        swap(arr[i],arr[minindex]);
    }
}
int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter elements of array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements after selection sorting :"<<endl;
    selectionsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}