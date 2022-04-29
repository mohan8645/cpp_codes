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
int stringtoint(string s)
{
   int n=s.length();
   if(n==1)
      {return s[0]-48;}
   double y= stringtoint(s.substr(1));
   double x=s[0]-48;
   x=x*(pow(10,n-1))+y;
   return int(x);
}
int main()
{
   fastio;
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   string s;cin>>s;
   cout<<stringtoint(s)<<endl;
} 