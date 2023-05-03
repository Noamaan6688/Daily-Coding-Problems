class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st1,st2;
        for (int i=0;i<nums1.size();i+=1) st1.insert(nums1[i]);
        for (int i=0;i<nums2.size();i+=1) st2.insert(nums2[i]);
                
        // vector<vector<int>>v(2);
        for (auto i:nums1)
        {
            if (st2.find(i)!=st2.end()) st2.erase(i);
        }
        for (auto i:nums2)
        {
            if (st1.find(i)!=st1.end()) st1.erase(i);
        }
        
        return {vector<int>(st1.begin(),st1.end()),vector<int>(st2.begin(),st2.end())};
    }
};