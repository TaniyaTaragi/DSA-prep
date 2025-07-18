#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
      int n;
      cout<<"Enter the size of array :";
      cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
         cin>>arr[i];
    int target;
    cout<<"enter value of target :";
    cin>>target;
    vector<int>res;
    for(int i=0;i<n;i++)
        res.push_back(arr[i]);
    sort(res.begin(),res.end());
     int left=0,right=n-1, found=0;
     while(left<right)
     {
           if(res[left]+res[right]<target)
              left++;
            else if(res[left]+res[right]>target)
              right--;
            else{
                 found=1;
                 break;
            }
     }
  if(found==1)
       cout<<"found";
  else 
     cout<<"false";
}