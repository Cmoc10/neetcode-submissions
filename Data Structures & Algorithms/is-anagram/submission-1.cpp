class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> myMap;
        if(s.length() != t.length()){
            return false;
        }
        for(char c: s){
            myMap[c]++;
        }
        for(char c: t){
            if(myMap[c] == 0){
                return false;
            }
            else{
                myMap[c]--;
            }
        }
        return true;
    }
};
