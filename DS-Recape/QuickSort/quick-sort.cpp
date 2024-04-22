#include<bits/stdc++.h>
using namespace std;

vector<int> quickSort(vector<int> &a){
    if(a.size() <= 1)
        return a;
    
    int pivot = a.size() - 1;
    vector<int> l,r;
    for(int i = 0; i<a.size(); i++){
        if(i == pivot)
            continue;

        if(a[i] <= a[pivot])
            l.push_back(a[i]);
        else
            r.push_back(a[i]);
    }
    

    vector<int> sorted_l = quickSort(l);
    vector<int> sorted_r = quickSort(r);
    vector<int> sorted_a;
    
    for(int i = 0; i < sorted_l.size(); i++)
        sorted_a.push_back(sorted_l[i]);

    sorted_a.push_back(a[pivot]);

    for(int i = 0; i < sorted_r.size(); i++)
        sorted_a.push_back(sorted_r[i]);

    return sorted_a;

}

int main(){
    vector<int> a = {3, 4, 56, 1, 5};
    vector<int> sort_a = quickSort(a);

    for(int i = 0; i < a.size(); i++){
        cout<<sort_a[i]<<" ";
        // cout<<a[i]<<" ";
    }
}