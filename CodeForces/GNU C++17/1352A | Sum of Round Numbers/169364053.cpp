#include <iostream>
#include <vector>
using namespace std;
#define printarr(v) for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<"\n";
int main()
{
    int r;cin>>r;while (r--)
    {
        vector<int>v;
        int c=1;
        string s;cin>>s;
        for (int i=s.size()-1;i>=0;i-=1)
        {
            if ((s[i]-'0')!=0) v.push_back((s[i]-'0')*c);
            c*=10;
        }
        cout<<v.size()<<"\n";
        printarr(v);
    }
}