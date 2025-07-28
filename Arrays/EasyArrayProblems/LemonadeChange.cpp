#include<iostream>
using namespace std;
bool lemonadeChange(int bills[],int n) {
        int count5=0,count10=0;
        for(int i=0;i<n;i++)
        {
            if(bills[i]==5)
               count5++;
            else if(bills[i]==10)
            {
                 if(count5!=0)
                {
                    count5--;
                    count10++;
                }
                else{
                    return false;
                }
                 
            }
            else
            {
                if(count10>0&&count5>0)
                {
                    count10--;
                    count5--;
                    
                }
               else if(count5>=3)
                       count5=count5-3;
                else{
                    return false;
                }
            }
        }
        return true;
    }
int main()
{
int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
       cin>>arr[i];
    bool res=lemonadeChange(arr,n);
    cout<<res;
}
    
