#include<bits/stdc++.h>
using namespace std;
/*

0----1
    / \
   2---3


undirected and unwaighted graph

0--1 --> 1
1--0 --> 1
1--2 --> 1
1--3 --> 1
2--1 --> 1
2--3 --> 1
3--2 --> 1
3--1 --> 1

martrx[i][j] = 1 if i note to j node travers by only one edge

0 1 0 0 
1 0 1 1 
0 1 0 1 
0 1 1 0 


time complexity = O(n^2)
space complexity = O(n^2)
*/


int main(){
    int nodes = 4;  // O(1)
    int matrix[nodes][nodes];

    for(int i=0; i<nodes; i++){            // O(n^2)
        for(int j = 0; j<nodes; j++){
            matrix[i][j] = 0;
        }
    }
    // time complexity O(n^2)
    // no of edge E --> n^2
    // A---B
    // n x n --> n^2
    matrix[0][1] = 1;
    matrix[1][0] = 1;
    matrix[1][2] = 1;
    matrix[1][3] = 1;
    matrix[2][1] = 1;
    matrix[2][3] = 1;
    matrix[3][2] = 1;
    matrix[3][1] = 1;

    for(int i=0; i<nodes; i++){
        for(int j = 0; j<nodes; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


}