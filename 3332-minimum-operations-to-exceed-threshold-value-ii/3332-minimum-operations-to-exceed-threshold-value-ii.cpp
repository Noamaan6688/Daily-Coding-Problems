class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<long long int, vector<long long int>, greater<long long int>> pq;
        for(auto it: nums) pq.push(it);
        long long int ans=0;
        while(pq.top()<k)
        {
            long long int first=pq.top();pq.pop();
            long long int second=pq.top();pq.pop();
            long long int c=2*min(first,second)+max(first,second);
            pq.push(c);
            ans+=1;
        }
        return ans;
    }
};