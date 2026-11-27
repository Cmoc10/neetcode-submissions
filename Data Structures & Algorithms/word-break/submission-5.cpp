class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> dp(s.size()+ 1, false);
        dp[s.size()] = true;
        for(int i=s.size()-1; i>=0; i--){
            for(string word: wordDict){
                if(i + word.size() <= s.size() && s.substr(i,word.size()) == word){
                    // std::cout <<"word = " << word << " substring = " << s.substr(i,word.size()) << ", word size = " << word.size() << " string size = " << s.size() << ", where does this go? " << i+ word.size() << std::endl;
                    dp[i] = dp[i + word.size()];
                }
                if(dp[i]){
                    break;
                }
            }
        }
        return dp[0];
    }
};
