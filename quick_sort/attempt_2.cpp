//
// Created by aswath641 on 21/01/21.
//

#include "bits/stdc++.h"

using namespace std;

void swap(vector<int> &array, int i1, int i2) {
    int temp = array[i1];
    array[i1] = array[i2];
    array[i2] = temp;
}

int partition(vector<int> &array, int left, int right) {
    int pivot_index = right;
    int g = left, s = left;

    while (g < right && s < right) {
        while (g < right && array[g] <= array[pivot_index]) {
            g++;
        }
        s = g;
        while (s < right && array[s] > array[pivot_index]) {
            s++;
        }
        swap(array, g, s);
        g++;
        s++;
    }

    swap(array, g, pivot_index);
    return g;
}

void quickSort(vector<int> &array, int left, int right) {
//    Sanity check so that the recursion can stop
    if (left < 0 || right > array.size() || left > right) {
        return;
    }

    int index = partition(array, left, right);
    quickSort(array, left, index - 1);
    quickSort(array, index + 1, right);

}

void printArray(vector<int> &array) {
    for (auto x:array) {
        cout << x << " ";
    }
}

int main() {

    vector<int> array = {35, 40, 19, 16, 14, 56, 81, 44, 37};

    printArray(array);

    cout<<endl;
    quickSort(array, 0, array.size() - 1);

    printArray(array);

    return 0;
}