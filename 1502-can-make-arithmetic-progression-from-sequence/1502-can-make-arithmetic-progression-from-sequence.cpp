class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        if (arr.size()==2) return 1;
        sort(arr.begin(),arr.end());
        int d=arr[1]-arr[0];
        for (int i=1;i<arr.size();i+=1)
        {
            if ((arr[i]-arr[i-1])!=d) return 0;
        }
        return 1;
    }
};