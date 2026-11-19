class Solution {
public:
    int formula(int left, int right, int distance){
        return distance * min(left, right);
    }
    int maxArea(vector<int>& heights) {
        int maxWater = 0;
        int left = 0;
        int right = heights.size()-1;
        while(left < right){
            if(formula(heights[left], heights[right], right - left) > maxWater){
                maxWater = formula(heights[left], heights[right], right - left);
            }
            else{
                if(heights[left] < heights[right]){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return maxWater;
    }
};
