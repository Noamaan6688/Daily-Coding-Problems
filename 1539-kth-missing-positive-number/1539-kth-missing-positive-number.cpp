class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int c=0,i=0;
        for (int j=1;j<=arr.back();j+=1)
        {
            if (j==arr[i]) i+=1;
            else c+=1;
            if (c==k) return j;
        }
        return arr.back()+k-c;
    }
};