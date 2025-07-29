#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter the rows :";
    cin>>row;
    cout<<"Enter the col : ";
    cin>>col;
    int mat[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
             cin>>mat[i][j];
        }
    }
    int top=0,bottom=row-1,left=0,right=col-1;
    while(top<=bottom&&left<=right)
    {
     for(int i=left;i<=right;i++)
       {
           cout<<mat[top][i]<<" ";
         
       }
         top++;
       for(int i=top;i<=bottom;i++)
       {
           cout<<mat[i][right]<<" ";
          
       }
        right--;
       for(int i=right;i>=left;i--)
       {
          cout<<mat[bottom][i]<<" ";
         
       }
        bottom--;
       for(int i=bottom;i>=top;i--)
       {
         cout<<mat[i][left]<< " ";
         
       }
       left++;
    }
    
}