class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        std::priority_queue<int> maxHeap;
        for(const int stone : stones){
            maxHeap.push(stone);
        }
        int first = 0;
        int second = 0;
        while(maxHeap.size() > 1){
            first = maxHeap.top();
            maxHeap.pop();
            second = maxHeap.top();
            maxHeap.pop();
            std::cout << first << " " << second << std::endl;
            if(first == second){
                continue;
            }
            else if(first > second){
                maxHeap.push(first - second);
            }
            else{
                maxHeap.push(second - first);
            }
        }
        if(maxHeap.empty()){
            return 0;
        }
        else{
            return maxHeap.top();
        }
    }
};
