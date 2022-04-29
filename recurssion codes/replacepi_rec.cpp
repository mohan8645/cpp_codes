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
string replacepi(string s)
{
   int n=s.length();
   if(n<=1)
      return s;
   if(s[0]=='p' && s[1]=='i')
   {
      string smalloutput=replacepi(s.substr(2));
      return "3.14"+smalloutput;
   }
   else 
     { return s[0]+replacepi(s.substr(1));}

}
int main()
{
   fastio;
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   string s;cin>>s;
   cout<<replacepi(s)<<endl;



} 