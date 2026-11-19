class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums.size()-1;
        vector<vector<int>> result = {};
        for(int i = 0; i<nums.size(); i++){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            left = i+1;
            right = nums.size()-1;
            while(left < right){
                if(nums[left] + nums[right] + nums[i] == 0){
                    result.push_back({nums[left],nums[right],nums[i]});
                    left++;
                    right--;
                    while(left < right && nums[left] == nums[left-1]){
                        left++;
                    }
                }
                else if(nums[left] + nums[right] + nums[i] < 0){
                    left++;
                }
                else if(nums[left] + nums[right] + nums[i] > 0){
                    right --;
                }
            }
        }
        return result;
    }
};
