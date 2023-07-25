class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int c=-1;
        for (int i=0;i<arr.size()-1;i+=1)
        {
            if (arr[i]>arr[i+1])
            {
                c=i;
                break;
            }
        }
        return c;
    }
};