// PROBLEM :
// You're given strings J representing the types of stones that are jewels, and S representing the stones you have.  Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.
// The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A"

// Test case 1
// Input: J = "aA", S = "aAAbbbb"
// Output: 3

// Test case 2
// Input: J = "z", S = "ZZ"
// Output: 0

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int s_len = S.length();
        int j_len = J.length();
        int accum=0;
        for(int i=0;i<s_len;i++){
            for(int j=0;j<j_len;j++){
                if(J[j] == S[i]){
                    accum++;
                }
            }
        }
        return accum;
    }
};