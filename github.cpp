#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll unsigned long long 
#define pb push_back
using namespace std;
int main()
{
  int t;cin>>t;while(t--)
  {
    int n,m,r;cin>>n;14
    int sum=0;    
    m=n;
    while(n>0)
    {
      r=n%10;
      n=n/10;
      sum+=r*r*r;
    }
    if(sum==m)
      cout<<"armstrong number"<<endl;
     else
      cout<<"not an armstrong number"<<endl;
  }
  
  return 0;
}