class Solution {
public:
    bool isValid(string s) {
        std::stack<char> lastParentheses = {};
        for(const char c: s){
            if(c == '(' || c == '{' || c == '['){
                lastParentheses.push(c);
            }
            else if(c == ')'){
                if(lastParentheses.empty() == true){
                    return false;
                }
                else if(lastParentheses.top() == '('){
                    lastParentheses.pop();
                }
                else{
                    return false;
                }
            }
            else if(c == '}'){
                if(lastParentheses.empty() == true){
                    return false;
                }
                else if(lastParentheses.top() == '{'){
                    lastParentheses.pop();
                }
                else{
                    return false;
                }
            }
            else if(c == ']'){
                if(lastParentheses.empty() == true){
                    return false;
                }
                else if(lastParentheses.top() == '['){
                    lastParentheses.pop();
                }
                else{
                    return false;
                }
            }
        }
        return lastParentheses.empty();
    }
};
