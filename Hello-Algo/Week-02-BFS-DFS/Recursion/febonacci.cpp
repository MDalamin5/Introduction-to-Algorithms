#include<bits/stdc++.h>
using namespace std;

int getFebonacci(int num){
    if(num == 0 || num == 1)
        return num;
    
    else
        return getFebonacci(num - 2) + getFebonacci(num -1);
}

int main(){
    cout<<getFebonacci(8);
}