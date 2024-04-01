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
        cout<<endl;
    }

    void downHeapify(int idx){
        

        while(true){
            int largest = idx;
            int l = (2*idx) + 1;
            int r = (2*idx) + 2;

            if(l<nodes.size() && nodes[l] > nodes[largest]){
                largest = l;
            }
            if(r < nodes.size() && nodes[r] > nodes[largest]){
                largest = r;
            }
            if(largest == idx)
                break;
            swap(nodes[largest], nodes[idx]);
            idx = largest;
        }
        
    }

    void deleteData(int idx){
        if(idx > nodes.size())
            return;
        swap(nodes[idx], nodes[nodes.size()-1]);
        nodes.pop_back();
        downHeapify(idx);
    }
    int getMax(){
        return nodes[0];
    }
    int ExtractMax(){
        int ret = nodes[0];
        deleteData(0);
        return ret;
    }
};
int main(){
    MaxHeap heap;
    heap.insert(4);
    heap.insert(7);
    heap.insert(9);
    heap.insert(1);
    heap.insert(10);
    heap.insert(15);
    heap.insert(3);
    
    heap.DisplayHeap();
    heap.deleteData(0);
    heap.DisplayHeap();
    heap.deleteData(0);
    heap.DisplayHeap();
}