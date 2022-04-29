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
string removex(string s)
{int n=s.length();
   if(n==0)
      return "";
   if(s[0]!='x')
   {
      return s[0]+removex(s.substr(1));
   }
   else
   {
      return removex(s.substr(1));
   }
   
}
int main()
{
   fastio;
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   string str;cin>>str;
   str= removex(str);
   cout<<str;
   return 0;
} 