class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2){
            return n;
        }
        int oneStair = 1;
        int twoStair = 1;
        for(int i=0; i< n-1 ; i++){
            int temp = oneStair;
            oneStair = oneStair + twoStair;
            twoStair = temp;
        }
        return oneStair;
    }
};
