#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 void threeSum(vector<int>arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> res;
        int n = arr.size();
        
        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && arr[i] == arr[i - 1])
             continue; 
            
            int j = i + 1;
            int k = n - 1;
            
            while (j < k) {
                int sum = arr[i] + arr[j] + arr[k];
                
                if (sum < 0) {
                    j++;
                } else if (sum > 0) {
                    k--;
                } else {
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                    while (j < k && arr[j] == arr[j + 1]) 
                        j++; 
                    while (j < k && arr[k] == arr[k - 1]) 
                          k--; 
                    j++;
                    k--;
                }
            }
        }
        
     
    }
int main()
{
      int n;
      cout<<"Enter the size of array :";
      cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
         cin>>arr[i];
    vector<int>temp;
    for(int i=0;i<n;i++)
        temp.push_back(arr[i]);
    threeSum(temp);
};
