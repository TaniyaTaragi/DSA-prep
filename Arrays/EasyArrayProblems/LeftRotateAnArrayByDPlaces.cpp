#include<iostream>
using namespace std;
int main()
{
    int n,place;
    cout<<"Enter the size of array :";
    cin>>n;
    //range based loop works if array size is known at compile time
    int *arr=new int [n];
    int *res=new int[n];
    cout<<"Enter the elements of array :";
    for(int i=0;i<n;i++)
       cin>>arr[i];
    cout<<"Enter the time you want to left shift the array :"<<endl;
    cin>>place;
  //  brute-force approach
    for(int i=0;i<place;i++)
    {
         int temp=arr[0];
         for(int i=1;i<n;i++)
         {
              arr[i-1]=arr[i];
              if(i==n-1)
                arr[i]=temp;
         }
    }
    //optimal - approach
    for(int i=0;i<n;i++)
    {
            int index=(i-place+n)%n;
            res[index]=arr[i];
    }
   for(int i=0;i<n;i++)
      cout<<res[i]<<" ";
}