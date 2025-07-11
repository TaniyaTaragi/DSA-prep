#include<iostream>
using namespace std;
int partition(int arr[],int low,int high)
{
        int  pivot=arr[high];
        int j=low,i=low-1;
        while(j<high)
        {
             if(arr[j]<=pivot)
             {
                 i++;
                swap(arr[i], arr[j]);
                
             }
               
            j++;
        }
    swap(arr[i + 1], arr[high]);
    return i+1;
}
void quicksort(int arr[],int low,int high)
{
         if(low<high)
         {
             int q=partition(arr,low,high);
             quicksort(arr,low,q-1);
             quicksort(arr,q+1,high);
         }
}
int main()
{
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array :";
    for(int i=0;i<n;i++)
       cin>>arr[i];
    quicksort(arr,0,n-1);
    cout<<"Elements after sorting are :";
    for(int i=0;i<n;i++)
       cout<<arr[i]<<" ";
    


}