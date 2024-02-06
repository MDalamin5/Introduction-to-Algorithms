#include<bits/stdc++.h>
using namespace std;
int powOf(int, int);
int main()
{
    int n,p;
    cin>>n>>p;
    cout<<powOf(n,p)<<endl;
}
int powOf(int n, int p)
{
    if(p==0)
    return 1;
    return powOf(n, p-1)*n;
}


