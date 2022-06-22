// https://leetcode.com/problems/valid-parentheses/



class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;
        for(char c : s){
            if(c=='{' || c=='[' || c=='('){
                brackets.push(c);                
            }
            else{
                if(brackets.empty()){
                    return false;
                }
                else if(brackets.top()=='{' && c=='}'){
                    brackets.pop();
                }
                else if(brackets.top()=='(' && c==')'){
                    brackets.pop();
                }
                else if(brackets.top()=='[' && c==']'){
                    brackets.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(brackets.empty()){
            return true;
        }
        else{
            return false;
        }
            
    }
};