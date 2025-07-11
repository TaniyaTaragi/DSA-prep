#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
    int swapi=0;
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n-1-i;j++)
       {
             if(arr[j]>arr[j+1])
             {
                 swap(arr[j],arr[j+1]);
                 swapi=1;
             }
                
       }
       if(swapi==0)
       {
          cout<<"array already sorted"<<endl;
          break;
       }
         
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
    cout<<"Elements are bubble sorting :"<<endl;
    bubblesort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    delete []arr;
    return 0;
}