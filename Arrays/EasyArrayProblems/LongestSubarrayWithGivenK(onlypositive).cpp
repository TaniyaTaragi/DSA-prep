#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int *arr=new int [n];
    cout<<"Enter the elements of array :";
    for(int i=0;i<n;i++)
       cin>>arr[i];
    // int count=0,max=0,sum=0,k;
    int k;
     cout<<"Enter target sum : ";
     cin>>k;
//      int sum=0,len=0;
//     //brute-force approach
//      for(int i=0;i<n;i++)
//      {
//         for(int j=i;j<n;j++)
//         {
//              sum+=arr[j];
//              if(sum==k)
//              {
//                 len=max(len,j-i+1);
//                 break;
//              }
//         }
//         sum=0;
//      }
//   cout<<"length is : "<<len;

  //better-solution
//   unordered_map<int,int>prefixsumindex;
//   int prefixsum=0,len=0,maxlen=0;
//   for(int i=0;i<n;i++)
//   {
//        prefixsum+=arr[i];
//        if(prefixsum==k)
//           len=i+1;
//        if(prefixsumindex.find(prefixsum-k)!=prefixsumindex.end())
//       {
//            len=i-prefixsumindex[prefixsum-k];
//            maxlen=max(maxlen,len);
//       }
//       if(prefixsumindex.find(prefixsum)==prefixsumindex.end())
//               prefixsumindex[prefixsum]=i;
        
         
//   }
//    cout<<"len is : "<<maxlen;
 int left=0,right=0,len=0,sum=arr[0];
      //optimal-solution
    while(right<n)
    {    
          while(left<=right&&sum>k)
          {
              sum-=arr[left];
              left++;
          }
         
         if(sum==k)
           len=right-left+1;
      
        right++;
        if(right<n) sum+=arr[right];
    }
  cout<<"maxlen is : "<<len;
}
