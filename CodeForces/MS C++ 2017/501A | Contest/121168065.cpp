// Hi
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <algorithm>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
 
using namespace std;
 
int main()
{
  int p,q,r,s;cin>>p>>q>>r>>s;
  if ((max((3*p)/10,p-((p/250)*r))>max((3*q)/10,q-((q/250)*s)))) cout<<"Misha\n";
  else if ((max((3*p)/10,p-((p/250)*r))<max((3*q)/10,q-((q/250)*s)))) cout<<"Vasya\n";
  else cout<<"Tie\n";
 
 return 0;   
}