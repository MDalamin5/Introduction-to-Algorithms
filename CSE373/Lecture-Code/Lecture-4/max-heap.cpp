#include<bits/stdc++.h>
using namespace std;
class MaxHeap{
public:
    vector<int>nodes;
    MaxHeap(){

    }
    void upHeapify(int indx){
        while(indx > 0 && nodes[(indx-1)/2] < nodes[indx]){
            swap(nodes[(indx-1)/2] , nodes[indx]);
            indx = (indx-1)/2;
        }
    }
    void insert(int x){
        nodes.push_back(x);
        upHeapify(nodes.size() - 1);
    }

    void DisplayHeap(){
        for(int i=0; i < nodes.size(); i++){
            cout<<nodes[i]<<" ";
        }
    }
};
int main(){
    MaxHeap heap;
    heap.insert(4);
    heap.insert(7);
    heap.insert(9);
    heap.insert(1);
    heap.insert(10);
    
    heap.DisplayHeap();
}