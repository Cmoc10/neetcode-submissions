class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int lowSpeed = 1;
        int highSpeed = *max_element(piles.begin(), piles.end());
        int res = highSpeed;
        int mid = 0;
        while(lowSpeed <= highSpeed){
            mid = (lowSpeed + highSpeed) / 2;
            long long totalTime = 0;
            for (int p : piles){
                totalTime += ceil(static_cast<double>(p) / mid);
            }
            if(totalTime <= h) {
                res = mid;
                highSpeed = mid - 1;
            }
            else{
                lowSpeed = mid + 1;
            }
        }
        return res;
    }
};
