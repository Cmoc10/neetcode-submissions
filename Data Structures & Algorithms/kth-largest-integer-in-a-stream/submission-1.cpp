class KthLargest {
public:
int size;
std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
    KthLargest(int k, vector<int>& nums) {
        size = k;
        for(const int num : nums){
            minHeap.push(num);
        }
        while(minHeap.size() > size){
            minHeap.pop();
        }
    }
    
    int add(int val) {
        minHeap.push(val);
        if(minHeap.size() > size){
            minHeap.pop();
        }
        return(minHeap.top());
    }
};
