class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int,pair<int,int>>> pq;
        for(int i=0;i<nums1.size();i+=1)
        {
            for(int j=0;j<nums2.size();j+=1)
            {
                int sum=nums1[i]+nums2[j];
                if (pq.size()<k) pq.push({sum,{nums1[i],nums2[j]}});
                else if(sum<pq.top().first)
                {
                    pq.pop();
                    pq.push({sum,{nums1[i],nums2[j]}});
                }
                else if(sum>pq.top().first) break;
            }
        }
        while(k!=0 and !pq.empty())
        {
            ans.push_back({pq.top().second.first,pq.top().second.second});
            pq.pop();
            k-=1;
        }
        return ans;
    }
};