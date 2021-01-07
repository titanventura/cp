/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
Example 4:

Input: s = "([)]"
Output: false
Example 5:

Input: s = "{[]}"
Output: true
*/


class Solution {
public:
    bool isValid(string s) {
        unordered_set<char> opening = {'(','{','['};
        unordered_set<char> closing = {')','}',']'};
        
        unordered_map<char,char> mapping = {
            {')','('},
            {'}','{'},
            {']','['}
        };
        
        
        vector<char> stack;
        
        for(auto _char:s){
            if(opening.find(_char) != opening.end()){
                stack.push_back(_char);
            }
            else if(closing.find(_char) != closing.end()){
                if(stack.size()>0){
                    if(mapping[_char] == stack[stack.size()-1]){
                        stack.pop_back();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        
        if(stack.size()>0){
            return false;
        }
        
        return true;
        
    }
};