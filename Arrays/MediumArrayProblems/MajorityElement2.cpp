class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        int count1=0,el1=INT_MIN,count2=0,el2=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
             if(count1==0&&el2!=nums[i])
                {
                    count1=1;
                    el1=nums[i];
                }
            else if(count2==0&&el1!=nums[i])
            {
                 count2=1;
                 el2=nums[i];
            }
            else if(el1==nums[i])
              count1++;
            else if(el2==nums[i])
              count2++;
            else
              {
                count1--;
                count2--;
              }
        }
        int temp1=0,temp2=0;
       for(int i=0;i<nums.size();i++)
       {
           if(nums[i]==el1)
              temp1++;
       }
       if(temp1>n/3)
         ans.push_back(el1);
    temp1=0;
    for(int i=0;i<nums.size();i++)  
       {
           if(nums[i]==el2)
              temp1++;
       }
       if(temp1>n/3)
         ans.push_back(el2);
      
       return ans;
    }
};
