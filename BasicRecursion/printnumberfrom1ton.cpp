#include<bits/stdc++.h>
using namespace std;
void printnumber(int n,int i)
{
      if(i>n) return;
      cout<<i<<" ";
      i++;
      printnumber(n,i);
}
int main()
{
    int n,i=1;
    cout<<"enter the number : ";
    cin>>n;
    printnumber(n,i);
}