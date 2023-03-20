class Solution {
public:
    bool canPlaceFlowers(vector<int>& fd, int n) {
        // int c=0;
        for (int i=0;i<fd.size();i+=1)
        {
            if (fd[i]==0)
            {
                if ((i==0 || fd[i-1]==0) && (i==fd.size()-1 || fd[i+1]==0)) n-=1,fd[i]=1;
            }
        }
        return n<=0;
    }
};