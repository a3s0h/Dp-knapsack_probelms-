class MedianFinder {
public:
    priority_queue<int> small;
    priority_queue<int, vector<int>, greater<int>> big;
    
    void addNum(int num) {
        small.push(num);
        big.push(small.top());
        small.pop();
        
        if (big.size() > small.size()) {
            small.push(big.top());
            big.pop();
        }
    }
    
    double findMedian() {
        if (big.size() == small.size())
            return 0.5 * (big.top() + small.top());
        return small.top();
    }
};