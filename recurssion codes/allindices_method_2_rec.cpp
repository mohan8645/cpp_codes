#include <bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int allindexes(int arr[],int size,int x,int output[])
{
   if(size<=0)
      return 0;
   int smalloutput=allindexes(arr+1,size-1,x,output);
   if(arr[0]==x)
   {
      for(int i=smalloutput-1;i>=0;i--)
      {
         output[i +1]=output[i]+1;
      }
      output[0]=0;
      smalloutput++;
   }
   else{
      for(int i=smalloutput-1;i>=0;i--)
      {
         output[i]=output[i]+1;
      } 
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