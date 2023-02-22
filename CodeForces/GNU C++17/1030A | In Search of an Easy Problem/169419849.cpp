#include<iostream>
using namespace std;
int main()
{
    int r;cin>>r;while (r--)
    {
        int c;cin>>c;
        if (c==1)
        {
            cout<<"HARD\n";
            return 0;
        }    
    }
    cout<<"EASY\n";
    return 0;
}