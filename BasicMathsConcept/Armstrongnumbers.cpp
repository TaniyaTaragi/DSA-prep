#include<bits/stdc++.h>
using namespace std;
int main()
{
   int num;
   cout<<"Enter the number : ";
   cin>>num;
   int temp=num,count=0,res=0;
   while(temp>0)
   {
       count++;
       temp/=10;
   }
   temp=num;
   while(temp>0)
   {
        int rem=temp%10;
        res=pow(rem,count)+res;
        temp=temp/10;
   }
   if(res==num)
     cout<<"Armstrong number";
   else 
      cout<<"Not an armstrong number";
}
