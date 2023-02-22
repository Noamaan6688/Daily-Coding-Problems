 
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i=0;
    cin>>a>>b>>c>>d>>e>>f>>g>>h;
    i=min(((b*c)/g),(d*e));
    i=min((f/h),i);
    cout<<i/a<<"\n";
    return 0;
}