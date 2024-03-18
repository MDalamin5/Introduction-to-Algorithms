#include<bits/stdc++.h>
using namespace std;
int febo(int);
int main(){
    int n;
    cin>>n;
    cout<<febo(n);
}
int febo(int n){
    if(n == 0 || n == 1)
        return n;
    else
        return febo(n-1) + febo(n-2);
}