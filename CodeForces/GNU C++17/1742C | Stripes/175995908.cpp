// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
 
void solve()
{
    int c1=0,c2=0;
    char c='i';
    char ch[8][8];
    f(i,8)
    {
        f(j,8)
        {
            cin>>ch[i][j];
        }
    }
    f(i,8)
    {
        c1=0;
        f(j,8)
        {
            if (ch[i][j]=='R') c1+=1;
            // cout<<c1<<"\n";
        }
        if (c1==8) c='R';
    }
    if (c=='i') c='B';
    // f(i,8)
    // {
    //     c2=0;
    //     f(j,8)
    //     {
    //         if (ch[j][i]=='B') c2+=1;
    //         // cout<<c2<<"\n";
    //     }
    //     if (c2==8) c='B';
    // }
 
    cout<<c<<"\n";
 
  return;
}
 
 
int main()
{
    flash
    int r;cin>>r;while (r--)
    {
        solve();
    }
 
    return 0;
}
/*
4
 
 
....B...
....B...
....B...
RRRRRRRR
....B...
....B...
....B...
....B...
 
 
RRRRRRRB
B......B
B......B
B......B
B......B
B......B
B......B
RRRRRRRB
 
 
RRRRRRBB
.B.B..BB
RRRRRRBB
.B.B..BB
.B.B..BB
RRRRRRBB
.B.B..BB
.B.B..BB
 
 
........
........
........
RRRRRRRR
........
........
........
........
 
*/