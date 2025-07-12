#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
         cin>>arr[i];
    }
   // better approach
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(max<arr[i])
          max=arr[i];
    }
    int secmax=INT_MIN;
    for(int i=0;i<n;i++)
    {
         if((arr[i]!=max)&&secmax<arr[i])
            secmax=arr[i];
    }
    if(secmax==INT_MIN)
        cout<<"Second max element not found"<<endl;
    else
        cout<<"second maximum element : "<<secmax<<endl;
    //optimal approach(one - pass)
    int largest=arr[0],seclargest=INT_MIN;
    for(int i=1;i<n;i++)
    {
         if(largest<arr[i])
             {
                seclargest=largest;
                largest=arr[i];
             }
        else 
        {
        if(arr[i]!=largest&&seclargest<arr[i])
               seclargest=arr[i];
        }
     }
     if(seclargest==INT_MIN)
          cout<<"seclargest not found"<<endl;
     else
        cout<<"second largest element is : "<<seclargest;
    delete[]arr;
    }
  
