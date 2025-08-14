#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>>mat={{0,1,0},{1,0,0},{1,1,0}};
    int top=0,bottom=mat.size()-1;
    while(top<bottom)
    {
          if(mat[top][bottom]==1)
                top++;
          else
              bottom--;
    }
   int celebrity=top;
    int found=0;
    for(int i=0;i<mat.size();i++)
    {
        if(i==celebrity) continue;
        if(mat[celebrity][i]==1||mat[i][celebrity]==0)
              {
                found=-1;
                break;
              }
    }
    if(found==-1)
     cout<<"celebrity not found ";
    else
     cout<<"celebrity is : "<<top;
}