#include<bits/stdc++.h>
using namespace std;
int febonacci(int);
int main()
{
    int n;
    cin>>n;
    cout<<febonacci(n)<<endl;
}
int febonacci(int n)
{
    if(n==0)
    return 0;
    if (n==1)
    return 1;

    return febonacci(n-2) + febonacci(n-1);
}