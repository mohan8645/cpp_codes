#include <bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int countdigit(int n)
{

 if(n/10==0)
   return 1;
 return 1+ countdigit(n/10);
}
signed main()
{
      fastio;
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
   int n;cin>>n;
   cout<<countdigit(n)<<endl;


}