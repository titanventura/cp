/*



*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;



bool is_two_sum_present(vector<int> &array, int arr_size, int sum, int index_elem_avoid) {
    unordered_set<int> set;

    for (int i = 0; i < arr_size; i++) {
        if(i != index_elem_avoid){
        if (set.find(sum - array[i]) != set.end()) {
            return true;
        } else {
            set.insert(array[i]);
        }
    }
    }
    return false;

}

void exec() {
    int test_case;
    cin >> test_case;

    int test_case_outputs[test_case]={1};

    for (int t = 0; t < test_case; t++) {
    
        int no_elems, sum_to_find;
        vector<int> array={};

//          Getting input and sum
        cin >> no_elems >> sum_to_find;


//           Fill vector
        for (int i = 0; i < no_elems; i++) {
            int elem;
            cin >> elem;
            array.push_back(elem);
        }

//            unordered_set<int> set;
        bool is_present;
        for (int j = 0; j < no_elems; j++) {
            if (is_two_sum_present(array, no_elems, sum_to_find - array[j], j)) {
                is_present = true;
                test_case_outputs[t] = 1;
                break;
            }
        }
        if (!is_present) {
            test_case_outputs[t] = 0;
        }
    }

    for(int p=0;p<test_case;p++){
        if(p!=test_case-1){
         
        cout<<test_case_outputs[p]<<endl;
       
        }
        else{
            cout<<test_case_outputs[p];
        }
    }
}


int main() {
	exec();
	return 0;
}