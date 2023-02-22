#include <iostream>
using namespace std;
int main()
{
    int p,q,c=0;cin>>p>>q;
    for (int i=0;i<p;i+=1)
    {
        if (i%2!=0 && c==0)
        {
            for (int j=0;j<q;j+=1)
            {
                if (j!=(q-1)) cout<<".";
                else cout<<"#";
            }
            c=1;
        }
        else if (i%2!=0 && c==1)
        {
            for (int j=0;j<q;j+=1)
            {
                if (j!=0) cout<<".";
                else cout<<"#";
            }
            c=0;
        }
        else for (int j=0;j<q;j+=1) cout<<"#";
        cout<<"\n";
    }
    return 0;
}