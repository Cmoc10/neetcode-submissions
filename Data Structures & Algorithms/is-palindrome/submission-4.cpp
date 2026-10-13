class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> letters = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','1','2','3','4','5','6','7','8','9','0'};
        bool bad = true;
        string validS = "";
        unordered_map<char,bool> alphabet;
        for(char c: letters){
            alphabet[c] = true;
        }
        for(char& c: s){
            c = tolower(c);
            if(alphabet[c]){
                validS.push_back(c);
            }
        }
        if(validS.size() <= 0){
            return true;
        }
        else if(validS.size() == 1){
            return true;
        }
        int start = 0;
        int end = validS.size();
        while(start < end){
            while(!alphabet[validS[start]]){
                start++;
            }
            while(!alphabet[validS[end]]){
                end--;
            }
            if(validS[start] != validS[end]){
                std::cout << validS[start] << " " << validS[end] << " ";
                return false;
            }
            end--;
            start++;
        }
        return true;
    }
};
