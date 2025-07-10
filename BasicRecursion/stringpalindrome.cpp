#include<iostream>
using namespace std;
bool palindrome(string s,int n,int i)
{
      if(i>=n/2) return true;
      if(s[i]!=s[n-i-1]) return false;
      return palindrome(s,n,++i);
}
int main()
{
    string s;
   
    cout<<"Enter string : ";
    cin>>s;
     int n=s.length();
    bool res=palindrome(s,n,0);
    if(res==true)
      cout<<"palindromic";
    else 
      cout<<"not palindromic";

}