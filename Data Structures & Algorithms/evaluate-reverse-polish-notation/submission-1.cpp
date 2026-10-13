class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> inputStack;
        unordered_map<string,int> checkMap = {
            {"+",1},
            {"-",2},
            {"*",3},
            {"/",4}
        };
        int x;
        int y;
        for(string s: tokens){
            if(checkMap[s]){
                switch(checkMap[s]){
                    case 1:
                        x = inputStack.top(); inputStack.pop();
                        y = inputStack.top(); inputStack.pop();
                        inputStack.push(x+y);
                    break;
                    case 2:
                        x = inputStack.top(); inputStack.pop();
                        y = inputStack.top(); inputStack.pop();
                        inputStack.push(y-x);
                    break;
                    case 3:
                        x = inputStack.top(); inputStack.pop();
                        y = inputStack.top(); inputStack.pop();
                        inputStack.push(x*y);
                    break;
                    case 4:
                        x = inputStack.top(); inputStack.pop();
                        y = inputStack.top(); inputStack.pop();
                        inputStack.push(y/x);
                    break;
                    default:
                    break;
                }
            }
            else{
                inputStack.push(stoi(s));
            }
        }
        return inputStack.top();
    }
};
