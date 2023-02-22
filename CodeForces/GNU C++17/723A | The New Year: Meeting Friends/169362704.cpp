#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int b[3];cin>>b[0]>>b[1]>>b[2];
    sort(b,b+3);
    cout<<b[1]-b[0]+b[2]-b[1]<<"\n";
    
 
    return 0;
}