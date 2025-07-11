#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
  int n;
  cout<<"Enter size of elements:";
  cin>>n;
  int arr[n];
  unordered_map<int,int>freq;
  for(int i=0;i<n;i++)
  {
     cin>>arr[i];
     freq[arr[i]]++;
  }
  int maxfreq=INT_MIN,maxelement;
  int minfreq=INT_MAX,minelement;
  for(auto it:freq)
  {
         if(maxfreq<it.second)
         {
              maxfreq=it.second;
              maxelement=it.first;
         }
         if(minfreq>it.second)
         {
            minfreq=it.second;
            minelement=it.first;
         }
  }
  cout<<"max freq element : "<<maxelement<<endl;
  cout<<"min freq element : "<<minelement<<endl;
}