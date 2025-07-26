 #include<iostream>
#include<algorithm>
using namespace std;
int main()
{
      int row;
      cout<<"Enter the no of rows : ";
      cin>>row;
      int col;
      cout<<"enter the no of cols: ";
      cin>>col;
      int arr[row][col];
      int temp[row][col];
      for(int i=0;i<row;i++)
       {
        for(int j=0;j<col;j++)
        {
              cin>>arr[i][j];
        }
       }
       cout<<endl;
       //time complexity O(n2)  space complexity O(n*m)
    for(int i=0;i<row;i++)
       {
        for(int j=0;j<col;j++)
        {
              temp[j][i]=arr[i][j];
        }
       }
    for(int i=0;i<row;i++)
   {
       for(int j=0;j<col/2;j++)
       {
            int tempi=temp[i][col-j-1];
            temp[i][col-j-1]=temp[i][j];
            temp[i][j]=tempi;
       }
   }
    for(int i=0;i<row;i++)
       {
        for(int j=0;j<col;j++)
        {
             cout<<temp[i][j]<<" ";
        }
        cout<<"\n";
       }
}