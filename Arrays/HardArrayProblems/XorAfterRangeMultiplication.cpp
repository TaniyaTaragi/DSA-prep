#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    const int mod=1e9+7;
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>res(nums);
        for(vector<int>q:queries)
            {
                 int l=q[0],r=q[1];
                   for(int i=l;i<=r; )
                       {
                            res[i]=(1ll*res[i]*q[3])%mod;
                           i=i+q[2];
                       }
            }
        long long ans=0;
        for(int i=0;i<res.size();i++)
            ans=ans^res[i];
        return (int)ans;
    }
};