class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
     int n=weights.size();
        if (n<=2) return 0;

        priority_queue<int> maxHeap;
        priority_queue<int, vector<int>, greater<int> > minHeap;
        long long maxP=0, minP=0;
        for (int i=0; i<k-1; i++){
            int partition=weights[i]+weights[i+1];
            maxP+=partition;
            maxHeap.push(partition);
            minHeap.push(partition);
        }
        minP=maxP; 
        for(int i=k-1; i<n-1; i++){
            int partition=weights[i]+weights[i+1];
            maxHeap.push(partition);
            minP+=partition-maxHeap.top();
            maxHeap.pop();
            minHeap.push(partition);
            maxP+=partition-minHeap.top();
            minHeap.pop();
        }
        return maxP-minP;
    }
};