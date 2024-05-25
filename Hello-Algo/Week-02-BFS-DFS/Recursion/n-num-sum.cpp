#include<iostream>
using namespace std;
int summ(int num){
    if(num==1)
        return 1;
    else
        return summ(num-1) + num;
}

int main(){
  cout<<summ(5);
}