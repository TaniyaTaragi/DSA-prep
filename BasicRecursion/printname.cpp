#include<bits/stdc++.h>
using namespace std;
void printname(int n,int i)
{
    if(i>n) return ;
    cout<<i <<"."<<"Taniya "<<endl;
    i++;
    printname(n,i);

}
int main()
{
    int n,i=1;
    cout<<"Enter the number of times you want to print your name : ";
    cin>>n;

    printname(n,i);
    return 0;
}