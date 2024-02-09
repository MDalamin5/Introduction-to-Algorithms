#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    vector<int>a(n);

    for(int i=0; i<n; i++)
        cin>>a[i];
    
    int low = 0, high = n-1;
    int flag = 0;
    while (low<=high)
    {
        int mid = (low + high)/2;
        if(a[mid] == k){
            cout<<"Got The Number"<<endl;
            flag = 1;
            break;
        }
        if(k < a[mid]){
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    if(flag == 0)
        cout<<"not got the Number";
    
}