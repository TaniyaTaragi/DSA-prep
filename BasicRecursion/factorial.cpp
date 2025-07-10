#include<iostream>
using namespace std;
long long fac(long long num)
{
    if(num==0||num==1) return 1;
    return num*fac(num-1);
}
int main()
{
    long num;
    cout<<"Enter the number : ";
    cin>>num;
    long long res=fac(num);
    cout<<"factorial is :"<<res;
}