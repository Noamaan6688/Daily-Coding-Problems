class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& ca, int et) {
        vector<bool>v;
        int c=0;
        for (int i=0;i<ca.size();i+=1) c=max(c,ca[i]);
        for (int i=0;i<ca.size();i+=1)
        {
            if (ca[i]+et>=c) v.push_back(1);
            else v.push_back(0);
        }
        return v;
    }
};