
/*
Graph is: 
      1-----2
           / \
          3---4
its undirected and unwaighted


outPUt:

    0 1 0 0 
    1 0 1 1 
    0 1 0 1 
    0 1 1 0 
*/


// Time complexty = n^2 + 1 + n^2 = n^2

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nodes = 4;
    int matrix [nodes][nodes];
    // initially matrix all index will be Zero

    for( int i =0; i<nodes; i++)
    {
        for(int j=0; j<nodes;j++)
        {
            matrix[i][j]=0;
        }
    }

    //O(E) E--> n^2

    matrix [0][1] =1;
    matrix [1][0] =1;

    matrix [1][2] =1;
    matrix [2][1] =1;

    matrix [2][3] =1;
    matrix [3][2] =1;

    matrix [3][1] =1;
    matrix [1][3] =1;


    for( int i =0; i<nodes; i++)
    {
        for(int j=0; j<nodes;j++)
        {
           cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
}