/*
Given a list of sorted characters letters containing only lowercase letters, and given a target letter target, find the smallest element in the list that is larger than the given target.

Letters also wrap around. For example, if the target is target = 'z' and letters = ['a', 'b'], the answer is 'a'.

Examples:
Input:
letters = ["c", "f", "j"]
target = "a"
Output: "c"

Input:
letters = ["c", "f", "j"]
target = "c"
Output: "f"

Input:
letters = ["c", "f", "j"]
target = "d"
Output: "f"

Input:
letters = ["c", "f", "j"]
target = "g"
Output: "j"

Input:
letters = ["c", "f", "j"]
target = "j"
Output: "c"

Input:
letters = ["c", "f", "j"]
target = "k"
Output: "c"
*/


class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        // l and r ptrs (indices)
        int left = 0, right = letters.size()-1,mid;
        
        // ascii of target.
        int tar_asc = (int)target;
        
        int max_size = (int)letters[right];
        mid = left + (right-left)/2;
        while(left<=right){
        
            // Calculate mid_index and ascii of char at mid_index
            
            int mid_asc = (int)letters[mid];
            
            if(mid_asc == tar_asc){
                break;
            }
            else if(tar_asc < mid_asc){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
            mid = left + (right-left)/2;
        }
        
        while((int)letters[mid]<=tar_asc and mid<letters.size()){
            mid++;
        }
        
        return letters[mid%letters.size()];
        
        
    }
};
