class Solution {
public:
    static int candy(vector<int>& ratings) {
        const int n=ratings.size();
        int ans=n, up=0, down=0;
        for(int i=1; i<n;){
            for(; i<n && ratings[i-1]==ratings[i]; i++); 
            for(; i<n && ratings[i-1]<ratings[i]; i++)
                ans+=++up; 
            for(; i<n && ratings[i-1]>ratings[i]; i++)
                ans+=++down;
            ans-=min(up, down);
            up=down=0;
        }
        return ans;
    }
};