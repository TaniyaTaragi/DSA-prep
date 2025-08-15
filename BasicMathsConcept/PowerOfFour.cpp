#include<iostream>
using namespace std;
bool isPowerOfFour(int n) {
        if(n<=0)return false;
        long long ans=1;
     while(ans<=n){
         if(ans==n)return true;
         ans=ans*4;
        }
        return false;
    }
int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;
    bool res=isPowerOfFour(n);
    cout<<res;
}
