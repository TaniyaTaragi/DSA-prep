#include<iostream>
#include<set>
using namespace std;
int main()
{
     int n,m;
     cout<<"Enter size of array1 : ";
    cin>>n;
    int *arr1=new int[n];
    for(int i=0;i<n;i++)
    {
         cin>>arr1[i];
    }
    cout<<"enter size of array 2 :";
    cin>>m;
  int *arr2=new int[m];
   for(int i=0;i<m;i++)
       cin>>arr2[i];
     set<int>res1;
     set<int>res2;
     for(int i=0;i<n;i++)
        res1.insert(arr1[i]);
     for(int i=0;i<m;i++)
       res2.insert(arr2[i]);
     set<int>res3;
     set<int>::iterator it1=res1.begin();
     set<int>::iterator it2=res2.begin();
     while(it1!=res1.end()&&it2!=res2.end())
     {
            if(*it1<*it2)
            {
               res3.insert(*it1);
               it1++;
            }
            
            else
            {
                 res3.insert(*it2);
                 it2++;
            }
     }
     while(it1!=res1.end())
     { 
          res3.insert(*it1);
               it1++;
     }
     while(it2!=res2.end())
     { 
          res3.insert(*it2);
               it2++;
     }
     cout<<"Union is : "<<endl;
     for(int val:res3)
        cout<<val<<" ";
     delete[]arr1;
     delete[] arr2;
}