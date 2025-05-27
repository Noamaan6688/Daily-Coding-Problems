class Solution {
public:
    int differenceOfSums(int n, int m) {
        int s=(n*(n+1))/2;
        int s1=((n/m)*(m+((n/m)*m)))/2;
        // cout<<s1<<"\n";
        // cout<<(m+((m/n)*m))<<"\n";
        return s-s1-s1;
    }
};