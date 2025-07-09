#include<iostream>
using namespace std;
void printnumber(int n)
{
      if(n==0) return;
      cout<<n<<" ";
      n--;
      printnumber(n);
}
int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    printnumber(num);
    return 0;
}