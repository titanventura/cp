//
// Created by aswath641 on 23/01/21.
//

/*
 * Quick Sort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot.
Given an array arr[], its starting position low and its ending position high.

Implement the partition() and quickSort() functions to sort the array.


Example 1:

Input:
N = 5
arr[] = { 4, 1, 3, 9, 7}
Output:
1 3 4 7 9
Example 2:

Input:
N = 9
arr[] = { 2, 1, 6, 10, 4, 1, 3, 9, 7}
Output:
1 1 2 3 4 6 7 9 10

Your Task:
You don't need to read input or print anything. Your task is to complete the functions partition()  and quickSort() which takes the array arr[], low and high as input parameters and partitions the array. Consider the last element as the pivot such that all the elements less than(or equal to) the pivot lie before it and the elements greater than it lie after the pivot.
 * */

#include "bits/stdc++.h"

using namespace std;

class QUICKSORT_er {

private:
    vector<int> integers;

public:
    QUICKSORT_er(vector<int> integers) {
        cout << "Initialised" << endl;
        this->integers = integers;
    }

    void printThem() {
//        cout << "Printing" << endl;
        for (auto x:this->integers) {
            cout << x << " ";
        }
        cout << endl;
    }

    void swap(vector<int> &integers, int idx_1, int idx_2) {
        if (idx_1 < integers.size() && idx_1 >= 0 && idx_2 < integers.size() && idx_2 >= 0) {
            int temp = integers[idx_1];
            integers[idx_1] = integers[idx_2];
            integers[idx_2] = temp;
        }
    }

//    These two functions are where the core logic gets implemented.

    int partition(vector<int> &integers, int first, int last) {
        if (first >= last)
            return first;
        int l_idx = first, r_idx = last - 1;
        int p_idx = last;
        // Initializing left and right pointers. Jus because 2 ptr approach of quick sort is far intuitive.

        while (l_idx <= r_idx) {

            if (l_idx <= r_idx && integers[l_idx] <= integers[last]) {
                l_idx++;
                continue;
            }
            if (r_idx >= l_idx && integers[r_idx] > integers[last]) {
                r_idx--;
                continue;
            }

            //            Time to swapp'em baby..
            swap(integers, l_idx, r_idx);
            l_idx++;
            r_idx--;
        }

        swap(integers, l_idx, p_idx);
        return l_idx;
    }

    void quickSortHelper(vector<int> &integers, int first, int last) {
        if (first > last || first < 0 || last < 0 || last >= integers.size() || first > integers.size())
            return;
        int index = partition(integers, first, last);
        this->printThem();
        cout << index << " " << integers[index] << endl;
        quickSortHelper(integers, first, index - 1);
        quickSortHelper(integers, index + 1, last);
    }

    void sort_them() {
        int last = this->integers.size() - 1; // is the last elem index
        int first = 0; // first elem index.
        cout << "Here are the first and the last " << first << " " << last << endl;
        quickSortHelper(this->integers, first, last);
    }
};


int main() {

    QUICKSORT_er qs({10, 5, 8, 14, 12, 13, 11, 6}); // Testing
    qs.printThem();
    qs.sort_them();
    qs.printThem();
    return 0;
}