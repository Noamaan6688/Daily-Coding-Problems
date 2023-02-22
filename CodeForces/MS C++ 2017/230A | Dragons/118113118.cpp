// Hi
#include <iostream>
#include <vector>
#include <algorithm>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define ll long long int
 
using namespace std;
 
int main()
{
    int p,q;cin>>p>>q;
    vector<pair<int,int>>v(q);
    f(i,q) cin>>v[i].first>>v[i].second;
    sort(v.begin(),v.end());
    f(i,q)
    {
        if (p>v[i].first) p+=v[i].second;
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }    
    }
    cout<<"YES"<<endl;
 
  return 0;
}