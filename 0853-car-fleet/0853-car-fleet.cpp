class Solution {
public:
    int carFleet(int ta, vector<int>& po, vector<int>& sp) {
        int c=0;
        map<int,double>mp;
        for (int i=0;i<po.size();i+=1) mp[-po[i]]=(double)(ta-po[i])/sp[i];
        double c1=0;
        for (auto i:mp)
        {
            if (i.second>c1) c1=i.second,c+=1;
        }
        return c;
    }
};