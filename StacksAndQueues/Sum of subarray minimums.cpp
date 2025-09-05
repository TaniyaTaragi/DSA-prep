class Solution {
private:
vector<int>findnse(vector<int>&arr){
    int n=arr.size();
    stack<int>st;
    vector<int>nse(n);
    for(int i=arr.size()-1;i>=0;i--)
    {
         while(!st.empty()&&arr[st.top()]>=arr[i])
            st.pop();
         nse[i]=st.empty()?n:st.top();
         st.push(i);
    }
    return nse;
}
vector<int>findpse(vector<int>&arr){
    int n=arr.size();
    stack<int>st;
    vector<int>pse(n);
    for(int i=0;i<n;i++)
    {
        while(!st.empty()&&arr[i]<arr[st.top()])
               st.pop();
        pse[i] = st.empty() ? -1 : st.top();
        st.push(i); 
        
    }
    return pse;
}
public:
 const int mod=1e9+7;
    int sumSubarrayMins(vector<int>& arr) {
      vector<int>nse=findnse(arr);
      vector<int>pse=findpse(arr);
      long long total=0;
      for(int i=0;i<arr.size();i++)
      {
         long long left=i-pse[i];
         long long right=nse[i]-i;
         total=(total+(left*right%mod)*arr[i])%mod;
      }
      return total;
       
       
    }
};
