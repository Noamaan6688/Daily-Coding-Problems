class KthLargest {
public:
    multiset<int>st;
    int c;
    KthLargest(int k, vector<int>& nums) {
        for (auto i:nums) st.insert(i);
        c=k;
    }
    
    int add(int val) {
        st.insert(val);
        int c1=st.size()-c,c2=0;
        for (auto i:st)
        {
            c2=i;
            c1-=1;
            if(c1<0) break;
        }
        return c2;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */