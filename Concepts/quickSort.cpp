// Quick Sort Algorithm

#include<bits/stdc++.h>
using namespace std;

void quickSort(vector<int>& arr, int start, int end) {
    // Base Case
    if(start >= end) return;
    // Recursive Case
    int pivot = arr[end];
    int i = start-1;
    for(int j=start; j<end; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[end]);
    quickSort(arr, start, i);
    quickSort(arr, i+2, end);
}

int main(){
    vector<int> v = {8, 2, 5, 3, 9, 4, 7 ,6, 1};
    quickSort(v, 0, v.size()-1);
    for(int i: v) cout<<i<<" ";
    return 0;
}