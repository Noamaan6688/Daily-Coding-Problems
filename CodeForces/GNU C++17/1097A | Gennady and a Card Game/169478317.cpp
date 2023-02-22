#include <iostream>
using namespace std;
int main()
{
    string s;cin>>s;
    for (int i=0;i<5;i+=1)
    {
        string s1;cin>>s1;
        if (s1[0]==s[0] || s1[1]==s[1])
        {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}