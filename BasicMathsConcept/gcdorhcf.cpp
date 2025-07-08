#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter value of and b : ";
    cin>>a>>b;
    while(a>0&&b>0)
    {
        if(a>b)
          a=a%b;
        else
         b=b%a;
    }
    if(a==0)
     cout<<"gcd is : "<<b;
    else
     cout<<"gcd is : "<<a;
}