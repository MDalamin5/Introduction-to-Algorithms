#include<bits/stdc++.h>
using namespace std;

bool isPalindrom(string input){
    if(input == "" || input.size() == 1)
        return true;

    int n = input.size();
    string subString = input.substr(1, n-2);
    return isPalindrom(subString) && input[0] == input.back();
}

int main(){
    cout<<isPalindrom("madam");
}