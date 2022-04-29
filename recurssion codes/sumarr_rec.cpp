#include <bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int sumarr(int arr[],int size)
{
   if(size<=0)
      {return 0;}
   return (arr[size-1]+sumarr(arr,size-1));
}
signed main()
{
      fastio;
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
   int n;cin>>n;
   int a[n];for(int i=0;i<n;i++){cin>>a[i];}
   cout<<"sum of elements in the array is"<<sumarr(a,n)<<endl;



}