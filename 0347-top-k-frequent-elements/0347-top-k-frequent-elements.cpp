class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for (int i=0;i<nums.size();i+=1) mp[nums[i]]++;
        priority_queue<pair<int,int>>q;
        for (auto i:mp) q.push({i.second,i.first});
        vector<int>v;
        for (int i=0;i<k;i+=1)
        {
            v.push_back(q.top().second);q.pop();
        }
        return v;
    }
};