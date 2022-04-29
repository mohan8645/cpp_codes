#include <bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int allindexes(int arr[],int size,int x,int output[])
{
   if(size<=0)
      return 0;
   int smalloutput=allindexes(arr,size-1,x,output);
   if(arr[size-1]==x)
   {
      output[smalloutput]=size-1;
      smalloutput++;
   }
      return smalloutput;     
}
void allindices(int arr[],int size,int x)
{
   int output[size];
   int n=allindexes(arr,size,x,output);
   for(int i=0;i<n;i++)
   {
      cout<<output[i]<<" ";
   }
   cout<<endl;
   cout<<n<<endl;
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
   allindices(a,n,x);

}