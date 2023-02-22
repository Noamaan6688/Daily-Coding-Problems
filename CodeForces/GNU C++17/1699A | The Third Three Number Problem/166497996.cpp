#include<bits/stdc++.h>
using namespace std;
int main(){
 int r;cin>>r;while(r--)
 {
  int k;cin>>k;
  if(k%2) cout<<"-1\n";
  else cout<<1<<" "<<1<<" "<<(k/2^1)<<"\n";
 }
}