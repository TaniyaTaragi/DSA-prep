#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
int n;
      cout<<"Enter the size of array :";
      cin>>n;
      //if n==0 || n==1 return true
      int *arr=new int[n];
      for(int i=0;i<n;i++)
      {
        cin>>arr[i];
      }
    //   //brute-force
    //   unordered_map<int,int>res;
    //   for(int i=0;i<n;i++)
    //   {
    //      res[arr[i]]++;
    //   }
    //   int resi=-1;
    //   for(int i=0;i<n;i++)
    //   {
    //        if(!(res.count(i)))
    //          {
    //             resi=i;
    //             break;
    //          }
    //   }
    //   if(resi==-1)
    //    cout<<"element is : "<<n;
    //   else
    //     cout<<"elements is : "<<resi;

    //optimal-approach
    int sum1=0,sum2=0;
    sum2=n*(n+1)/2;
    for(int i=0;i<n;i++)
    {
         sum1+=arr[i];
    }
    int res=sum2-sum1;
    cout<<"Missing element is :"<<res;

    //time complexity O(n) space complexity O(1)
}