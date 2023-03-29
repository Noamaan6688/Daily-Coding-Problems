class Solution {
public:
    int maxSatisfaction(vector<int>&sa) {
        vector<int>v=sa;
        sort(v.rbegin(),v.rend());
        int s=0,c=0;
        for(int i=0;i<v.size();i++){
            if(s+v[i]>0){
                c+=s+v[i];
                s+=v[i];
            }
        }
        return c;
    }
};