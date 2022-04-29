#include <bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int lastoccurence(int arr[],int size,int x)
{
   int z;
   if(size<0)
      return -1;
   else
   {
      if(arr[size]==x)
         {return size;}
      else
         z=lastoccurence(arr,size-1,x);
         return z;
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
   cout<<lastoccurence(a,n,x)<<endl;

}