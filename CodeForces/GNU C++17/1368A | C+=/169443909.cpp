#include<iostream>
using namespace std;
int main()
{
    long long int r;cin>>r;while (r--)
    {
        long long int a,b,c,d=0;cin>>a>>b>>c;
        while (a<=c || b<=c)
        {
            if (a<b) a+=b;
            else b+=a;
            d+=1;
        }
        cout<<d-1<<"\n";
    }
    return 0;
}