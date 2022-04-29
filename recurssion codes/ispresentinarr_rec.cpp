#include <bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
bool ispresent(int arr[],int size,int x)
{
   if(size<=0)
      return false;
   else
   {
      if(arr[size]==x)
         {return true;}
      else
         return ispresent(arr,size-1,x);
   }
}
signed main()
{
      fastio;
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
   int n,x;cin>>n>>x;
   int a[n];for(int i=0;i<n;i++){cin>>a[i];}
   cout<<ispresent(a,n,x)<<endl;



}