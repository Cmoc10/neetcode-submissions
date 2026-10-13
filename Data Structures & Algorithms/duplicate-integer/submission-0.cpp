class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> myMap;
        for(int num: nums){
            if(myMap[num]){
                return true;
            }
            else{
                myMap[num] = 1;
            }
        }
        return false;
    }
};