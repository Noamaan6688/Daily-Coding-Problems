#include<iostream>
using namespace std;
int main()
{
    string s;cin>>s;
    for (int i=0;i<s.size();i+=1)
    {
        if (i!=0)
        {
            if ((9-(s[i]-'0'))<(s[i]-'0')) s[i]=(9-(s[i]-'0'))+'0';
        }
        else
        {
            if (((9-(s[i]-'0'))!=0) && (9-(s[i]-'0'))<(s[i]-'0')) s[i]=(9-(s[i]-'0'))+'0';
        }
    }
    cout<<s<<"\n";
    return 0;
}