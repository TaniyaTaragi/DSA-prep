#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-3;i++)
        {
             if(i>0&&nums[i]==nums[i-1])
              continue;
             for(int j=i+1;j<n-2;j++)
             {
                if(j>(i+1)&&nums[j]==nums[j-1])
                   continue;

                int k=j+1,l=n-1;
                while(k<l)
                {

                    long long sum=(long long) nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum==target)
                    {
                      
                      res.push_back({nums[i],nums[j],nums[k],nums[l]});
                      while(k<l&&nums[k]==nums[k+1])
                        k++;
                      k++;
                      while(l>k&&nums[l]==nums[l-1])
                        l--;
                      l--;
                    }
                else if(sum>target)
                      l--;
                else
                      k++;

             }
               
             }
        }
    return res;
    }
