class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long int st=1,en=1e14;
        while (st<=en){
            long long int c=0,mid=(en+st)/2;
            for(int i=0;i<time.size();i++)
                c+=mid/time[i];
            if(c<totalTrips) st=mid+1;
            else en=mid-1;
        }
        return st;
    }
};