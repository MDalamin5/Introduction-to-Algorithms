#include<bits/stdc++.h>
using namespace std;
int sumOfDig(int);
int main()
{
    cout<<sumOfDig(7464);
}
int sumOfDig(int n)
{
    if(n==0)
    {
        return 0;
    }
    return sumOfDig(n/10) + n%10;
}