#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10;
    vector<int>a(n);
    for(int i=0; i<n; i++)
     a[i] = rand() % 10;


    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;

    cout<<"last value is: "<<a.back()<<endl;
    cout<<"fornt element is: "<<a.front()<<endl;
    cout<<"thsi size of the vactor before clear: "<<a.size()<<endl;
    cout<<"the vector is empty or not: "<<a.empty()<<endl;
    // a.clear();
    cout<<"thsi size of the vactor after clear: "<<a.size()<<endl;
    cout<<"the vector is empty or not: "<<a.empty()<<endl;

    // use of empty function
    
    /*
    while(!a.empty())
    {
        cout<<a.back()<<endl;
       a.pop_back();
    }
    */

    // power of resize
    vector<int>v(4);
    v.resize(10, 99);

    for(int i=0; i<5; i++)
        v[i] = i;

    for(auto x: v)
    cout<< x<<" ";
    cout<<endl;
    
    // sorting first vector
    sort(a.begin(), a.end());
    for(auto val : a)
        cout<<val<< " ";
    cout<<endl;
    sort(a.rbegin(), a.rend());

    
    for(auto val : a)
        cout<<val<< " ";
    cout<<endl;

    cout<<"max elements is vactor is: "<< *max_element(a.begin(), a.end())<<endl;
    cout<<"min elements is vactor is: "<< *min_element(a.begin(), a.end())<<endl;

    cout<<"max elements is vactor is: "<< *max_element(a.begin()+2, a.begin() + 5)<<endl;
    cout<<"min elements is vactor is: "<< *min_element(a.begin() + 5, a.end())<<endl;
}