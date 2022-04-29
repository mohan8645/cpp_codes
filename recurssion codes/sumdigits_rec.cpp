#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define map unordered_map
#define pb push_back
#define endl "\n"
#define rep(i,n) for (i = 0; i < n; ++i)
#define REP(i,k,n) for (i = k; i <= n; ++i)
#define REPR(i,k,n) for (i = k; i >= n; --i)
using namespace std;
int sumdigits(int n)
{
   if(n==0)
      return 0;
   int z=n%10;
   return z+sumdigits(n/10);
}
int main()
{
   fastio;
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   int n;cin>>n;
   cout<<sumdigits(n)<<endl;


} 