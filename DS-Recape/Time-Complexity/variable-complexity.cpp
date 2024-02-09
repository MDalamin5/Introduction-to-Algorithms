#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    int maxi = a[0];
    int mini = a[0];
    int sum = 0;

    for (int i=0; i<n; i++){
        maxi = max(maxi, a[i]);
        mini = min(mini, a[i]);
        sum += a[i];
        
    }
    cout<<"Max: "<<maxi<<" "<<"Min: "<<mini<<" "<<"Sum: "<<sum<<endl;


    // Time comeplextiy = 0(1) + 0(n) + 0(n) + 0(1) = O(n)
    // Space complexity = O(1)
}