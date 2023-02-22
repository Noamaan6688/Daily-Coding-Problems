#include <iostream>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int n, m;
  cin >>n>>m;
  string s[102];
  for(int i = 0; i < n; i++)cin>>s[i];
  int c = 0;
  for(int i = 0; i < n-1; i++)if(s[i][m-1] == 'R')c++;
  for(int i = 0; i < m-1; i++)if(s[n-1][i] == 'D')c++;
  cout<<c<<"\n";
 }
}