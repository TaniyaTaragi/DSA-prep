#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   
    int num,count=0;
    cout<<"Enter number\n";
    cin>>num;
    int temp=num;
    while(temp>0)
    {
       
        count++;
        temp=temp/10;
    }
    cout<<"No. of digits are : "<<count<<endl;

    //optimal approach
    count=(int)log10(num)+1;
    cout<<"No. of digits are : "<<count;
   
}