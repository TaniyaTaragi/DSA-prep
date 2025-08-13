#include<iostream>
#include<vector>
using namespace std;
class Solution {
     int checkk(int size,vector<int>weights)
        {
            int tempsum=0,tempday=1;
             for(int i=0;i<weights.size();i++)
             {
                   if(tempsum+weights[i]<=size)
                        tempsum+=weights[i];
                  else
                   {
                       tempday++;
                       tempsum=weights[i];
                   }
                
                       
             }
             return tempday;
        }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int max=INT_MIN,ans=0,sum=0;
       
         for(int i=0;i<weights.size();i++)
         {
             if(max<weights[i])
                max=weights[i];
            sum+=weights[i];
         }
   
            
         int left=max,right=sum;
         while(left<=right)
         {
            int  mid=left+(right-left)/2;
            int res=checkk(mid,weights);
             if(res<=days)
               {
                 ans=mid;
                 right=mid-1;
                
               }
            else
                left=mid+1;
        }
     return ans;  
    }
};
