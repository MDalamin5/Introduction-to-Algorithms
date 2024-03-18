#include<bits/stdc++.h>
// #include<iostream>
using namespace std;
int main(){
    int arr[] = {4, 2, 7, 6, 5, 1, -1};
    for(int j = 1; j < 7; j++){
        int key = arr[j];
        int i = j-1;
        while(i > -1 && arr[i] > key){
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1] = key;
    }

    for(int i = 0; i < 7 ; i++){
        cout<<arr[i]<<" ";
    }
}