#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
     int n;
     cout<<"Enter size of vector : ";
     cin>>n;
     vector<int>vec(n);
    // sorted array in input
     for(int i=0;i<n;i++)
         cin>>vec[i];
     for(int i=0;i<vec.size()-1;)
     {
           if(vec[i]==vec[i+1])
               vec.erase(vec.begin()+(i+1));
           else  
             i++;
      }
     for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
     //another way (remove duplicates rest you can have any elements after k)
     int j=0;
     for(int i=1;i<vec.size();i++)
     {
            
            if(vec[j]!=vec[i])
              {
                 j++;
                 vec[j]=vec[i];
              }
     }
      for(int i=0;i<vec.size();i++)
          cout<<vec[i]<<" ";
      return 0;
}