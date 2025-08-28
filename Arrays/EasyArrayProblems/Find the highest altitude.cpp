class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>res(n+1,0);
        for(int i=0;i<n;i++)
        {
               res[i+1]=gain[i]+res[i];
        }
        int max=INT_MIN;
        for(int i=0;i<res.size();i++)
        {
             if(max<res[i])
              max=res[i];
        }
        return max;
    }
};
