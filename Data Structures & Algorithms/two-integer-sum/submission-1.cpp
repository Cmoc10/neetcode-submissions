class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> myMap;
        vector<int> result;
        for(int i=0; i<nums.size(); i++){
            myMap[nums[i]] = i;
        }
        for(int i=0; i<nums.size(); i++){
            int temp = target - nums[i];
            if(myMap[temp] && myMap[temp] != i){
                result = {i, myMap[temp]};
                return result;
            }
        }
        return result;
    }
};
