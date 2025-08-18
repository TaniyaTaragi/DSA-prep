#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
vector<vector<int>> matr(k, vector<int>(k));
vector<vector<int>>temp(grid);
        int l;
        for(int i=0;i<k;i++)
            {
                l=k-1-i;
                for(int j=0;j<k;j++)
                    {
                        matr[l][j]=grid[x+i][y+j];
                    }
            }
             for(int i=0;i<k;i++)
            {
              
                for(int j=0;j<k;j++)
                    {
                      temp[x+i][y+j]=matr[i][j];
                    }
            }
        return temp;
    }
};