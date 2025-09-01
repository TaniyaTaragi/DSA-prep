//leetcode 503
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
       stack<int>st;
       int n=arr.size();
       vector<int>res(n,-1);
      for(int i=2*n-1;i>=0;i--){
          if(i<=n-1){
                 if(st.empty()){
                    st.push(arr[i%n]);
                    res[i%n]=arr[i%n];
                 }
                 else if(arr[i%n]<st.top()){
                     res[i%n]=st.top();
                    st.push(arr[i%n]);
                   
               }  
               else{
                while(!st.empty()&&arr[i%n]>=st.top())
                     st.pop();
                if(st.empty())
                  res[i%n]=-1;
                else
                  res[i%n]=st.top();
                 st.push(arr[i%n]);
                }
        }
          else{
            if(st.empty())
                st.push(arr[i%n]);
            else if(arr[i%n]<st.top())
                st.push(arr[i%n]);
            else{
                while(!st.empty()&&arr[i%n]>=st.top())
                     st.pop();
                 st.push(arr[i%n]);
                }
            }
      }
        return res;
      }
};
