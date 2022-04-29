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
bool ispalindromerec(string x,int s,int e)
{
   if(s==e)
      {return true;}
   else if(x[s]!=x[e])
      {return false;}
  else if(s<e+1)
      return ispalindromerec(x,s+1,e-1);
   return true;
}
bool ispalindrome(string x)
{
   int n=x.length();
   if(n==0)
      return true;
   return ispalindromerec(x,0,n-1);
}
int main()
{
   fastio;
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   string s;cin>>s;
   cout<<ispalindrome(s)<<endl;


} 