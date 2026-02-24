#include <iostream>
#include <vector>
using namespace std;
void insert(vector<int>&heap,int value){
    heap.push_back(value);
    int curr=heap.size()-1;
    while(curr>0&&heap[curr]>heap[(curr-1)/2]){
        swap(heap[curr],heap[(curr-1)/2]);
        curr=(curr-1)/2;
    }
}
void del(vector<int>&heap){
    if (heap.empty()){cout << "empty\n";return ;}
    heap[0]=heap.back();
    heap.pop_back();
    int curr=0;
    int n=heap.size();
    while(true){
        int largest=curr;
        int left=2*curr+1;
        int right=2*curr+2;
        if (left<n&&heap[left]>heap[largest]){
            largest=left;
        }
        if (right<n&&heap[right]>heap[largest]){
            largest=right;
        }
        if (largest==curr){
            break;
        }
        swap(heap[curr],heap[largest]);
        curr=largest;
    }
}
void display(vector<int>&heap){
    for (auto i : heap){
        cout << i << " " ;
    }
    cout << "\n";
}
int main (){
    vector<int>heap;
    insert(heap,40);
    insert(heap,30);
    insert(heap,35);
    insert(heap,10);
    insert(heap,50);
    display(heap);
    del(heap);
    del(heap);
    display(heap);
}
