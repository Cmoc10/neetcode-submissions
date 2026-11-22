class Solution {
public:
    int rob(vector<int>& nums) {
        //store the most amount of money that each house can have
        int k = nums.size();
        if(k < 2){
            return nums[0];
        }
        if(k < 3){
            return max(nums[0], nums[1]);
        }
        std::vector<int> mostMoney(k+1);
        mostMoney[0] = nums[0];
        mostMoney[1] = nums[1];
        mostMoney[2] = nums[0] + nums[2];
        for(int i=3; i<k; i++){
            mostMoney[i] = max(mostMoney[i-2] + nums[i], mostMoney[i-3] + nums[i]);
        }
        return max(mostMoney[k-1], mostMoney[k-2]);
    }
};
