#include<bits/stdc++.h>
using namespace std;

int save[100];
int febo(int n){
    if(n ==0)
        return 0;
    else if(n==1)
        return 1;
    else
        {
            if(save[n] != 0)
                return save[n];
                
            int x = febo(n-1);
            int y = febo(n-2);
            save[n] = x + y;
            return x+y;
        }
}

int main(){
    int n;
    cin>>n;
    cout<<febo(n)<<endl;
}