#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array :";
    cin>>n;
    //for n>1
    int *arr=new int [n];
    cout<<"enter elements :"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int first=arr[0];
    for(int i=1;i<n;i++)
    {
         arr[i-1]=arr[i];
         if(i==n-1)
            arr[i]=first;
    }
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
  return 0;
}