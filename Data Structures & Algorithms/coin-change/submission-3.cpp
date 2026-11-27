class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        std::vector<int> coinCount(amount+1, amount+1);
        coinCount[0] = 0;
        for(int i=1; i<=amount; i++){
            for(int coin: coins){
                if(i - coin < 0){
                    continue;
                }
                int remainder = i - coin;
                coinCount[i] = min(coinCount[i], 1 + coinCount[remainder]);
            }
        }
        if(coinCount[amount] > amount){
            return -1;
        }
        return coinCount[amount];
    }
};
