// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
int main()
{
  flash
  int r;cin>>r;while (r--)
  {
    char a[8][8];
    for(int i=0;i<8;i++) for(int j=0;j<8;j++) cin>>a[i][j];
    for(int i=1;i<7;i++) for(int j=1;j<7;j++)
    if(a[i-1][j-1]=='#' && a[i-1][j+1]=='#' && a[i+1][j-1]=='#' && a[i+1][j+1]) cout<<i+1<<" "<<j+1<<"\n";
  }
 
  return 0;
}
/*
3
.....#..
#...#...
.#.#....
..#.....
.#.#....
#...#...
.....#..
......#.
 
#.#.....
.#......
#.#.....
...#....
....#...
.....#..
......#.
.......#
 
.#.....#
..#...#.
...#.#..
....#...
...#.#..
..#...#.
.#.....#
#.......
 
*/