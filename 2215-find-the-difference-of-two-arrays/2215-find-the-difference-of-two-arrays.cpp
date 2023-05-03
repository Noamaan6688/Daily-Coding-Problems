class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st1,st2;
        for (int i=0;i<nums1.size();i+=1) st1.insert(nums1[i]);
        for (int i=0;i<nums2.size();i+=1) st2.insert(nums2[i]);
                
        vector<vector<int>>v(2);
        for (auto i:st1)
        {
            if (st2.find(i)==st2.end()) v[0].push_back(i);
        }
        for (auto i:st2)
        {
            if (st1.find(i)==st1.end()) v[1].push_back(i);
        }
        
        return v;
    }
};