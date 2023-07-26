// find the sum 1 to n

#include<bits/stdc++.h>
using namespace std;
int sum(int);
int main()
{
   cout<<sum(5)<<endl;
}

int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    return sum(n-1)+n; 
}