/*
Given an array nums of integers, return how many of them contain an even number of digits.
 

Example 1:

Input: nums = [12,345,2,6,7896]
Output: 2
Explanation: 
12 contains 2 digits (even number of digits). 
345 contains 3 digits (odd number of digits). 
2 contains 1 digit (odd number of digits). 
6 contains 1 digit (odd number of digits). 
7896 contains 4 digits (even number of digits). 
Therefore only 12 and 7896 contain an even number of digits.
Example 2:

Input: nums = [555,901,482,1771]
Output: 1 
Explanation: 
Only 1771 contains an even number of digits.
 

Constraints:

1 <= nums.length <= 500
1 <= nums[i] <= 10^5

*/

class Solution {
public:
    int find_num_digits(int num){
            int temp = 0;
            while(num > 0){
                num /= 10;
                temp++;
            }
            return temp;
        }
    int findNumbers(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
        
//         int first_num = nums.front();
        
//         int num_even = 0;
        
//         int temp=0;
        
//         while(first_num > 0){
//             first_num /= 10; 
//             temp+=1;
//         }
        
//         if(temp % 2 == 0){
//             num_even++;
//         }
        
//         int len_array = nums.size();
        
//         if(len_array <= 1) return num_even;
        
//         for(int i=2; i<len_array ; i++){
//             int divisor = pow(10,temp);
            
//             while((int)(nums[i] / divisor)!=0){
//                 temp += 1;
//                 divisor = (int)pow(10,temp);
//             }
            
//             if(temp%2 == 0){
//                 num_even++;
//             }
            
//         }
//         return num_even;
        
        
        int num_even = 0;
        
        for(int i=0;i<nums.size();i++){
            if(find_num_digits(nums[i]) %2 == 0){
                num_even++;
            }
        }
        
        return num_even;
        
        
    }
};