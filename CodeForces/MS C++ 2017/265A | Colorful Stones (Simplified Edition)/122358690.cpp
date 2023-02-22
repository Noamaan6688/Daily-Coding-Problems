// Hi
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <algorithm>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
 
using namespace std;
 
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int c=0;
    f(i,s2.size())
    {
        if (s2[i]==s1[c]) c+=1;
    }
    cout<<c+1<<"\n";
 
 return 0;   
}