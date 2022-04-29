#include <bits/stdc++.h>
#define int long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
double geometricsum(int k)
{
   if(k==0)
      return 1;
   return (1/double(pow(2,k)))+geometricsum(k-1);   
}
signed main()
{
      fastio;
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
   int k;cin>>k;
   cout<<geometricsum(k)<<endl;

} 