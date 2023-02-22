#include <iostream>
using namespace std;
int main()
{
    long long int k,c=0;cin>>k;
    while (k--)
    {
        string s;cin>>s;
        if (s[0]=='T') c+=4;
        else if (s[0]=='C') c+=6;
        else if (s[0]=='O') c+=8;
        else if (s[0]=='D') c+=12;
        else c+=20;
    }
    cout<<c<<"\n";
    return 0;
}