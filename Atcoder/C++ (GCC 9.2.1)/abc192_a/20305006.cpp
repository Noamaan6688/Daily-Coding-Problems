//Hi
#include<bits/stdc++.h>
#include<math.h> 
#include<string.h>
#define ll   long long int

using namespace std;

int main()
{
  int r;
  cin>>r;
  if (r%100==0) cout<<100<<endl;
  else cout<<100-(r%100)<<endl;
  return 0;   
}