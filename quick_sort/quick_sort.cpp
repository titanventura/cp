//
// Created by aswath641 on 15/01/21.
//

#include "bits/stdc++.h"

using namespace std;

void printArray(vector<int> &vect) {
    for (auto x:vect) {
        cout << x << " ";
    }
    cout << endl;
}

void swap(vector<int> &arr, int ind1, int ind2) {
    int temp = arr[ind1];
    arr[ind1] = arr[ind2];
    arr[ind2] = temp;
}

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[high];
    int large_index = low;
    int small_index = low + 1;

//    cout<<"before swap"<<endl;
    while (small_index < high && large_index < high) {
        while (arr[large_index] <= pivot && large_index < high) {
            large_index++;
        }
        while (arr[small_index] > pivot && small_index < high) {
            small_index++;
        }

        swap(arr, small_index, large_index);

        small_index++;
        large_index++;
    }
//    printArray(arr);
//
//    cout<<"after swap"<<endl;
    return large_index + 1;
}


void quickSort(vector<int> &arr, int low, int high) {
    if (low >= high || high >= arr.size() || low < 0 || low >= arr.size() || high < 0) {
        return;
    }
//    printArray(arr);
    int part_index = partition(arr, low, high);
    quickSort(arr, low, part_index - 1);
    quickSort(arr, part_index + 1, high);
}


vector<int> quickSortAlgorithm(vector<int> &inp_arr) {
    int size = inp_arr.size();
    quickSort(inp_arr, 0, size - 1);
    return inp_arr;
}

int main() {
//    vector<int> input = {20, 10, 15, 12, 6, 1};
    vector<int> input = {8, 7, 6, 1, 0, 9, 2};
    printArray(input);
    cout << "initial" << endl;
    vector<int> sorted = quickSortAlgorithm(input);
    for (auto i:sorted) {
        cout << i << " ";
    }
}