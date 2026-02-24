#include <iostream>
#include <vector>
using namespace std;
void heapify(vector<int>& arr, int n, int i) {
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
void buildHeap(vector<int>& arr) {
    int n = arr.size();
    for (int i = n/2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}
int main() {
    vector<int> arr = {12, 11, 13, 6, 7};
    cout << "array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    buildHeap(arr);
    cout << "\n building heap: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    int value = 20;
    arr.push_back(value);   
    int i = arr.size() - 1;
    while (i > 0 && arr[(i - 1)/2] < arr[i]) {
        swap(arr[i], arr[(i - 1)/2]);
        i = (i - 1)/2;
    }
    cout << "\ninsertion: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    arr[0] = arr.back();   
    arr.pop_back();       
    heapify(arr, arr.size(), 0);
    cout << "\ndeletion: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
