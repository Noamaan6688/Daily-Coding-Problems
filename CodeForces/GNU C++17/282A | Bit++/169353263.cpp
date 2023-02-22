#include<iostream>
using namespace std;
int main()
{
    int k,c=0;cin>>k;
    while (k--)
    {
        string s;cin>>s;
        if (s[1]=='+') c+=1;
        else c-=1;
    }
    cout<<c<<"\n";
    
    return 0;
}