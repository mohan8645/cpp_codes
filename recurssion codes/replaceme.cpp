#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int 
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define umap unordered_map
#define pb push_back
#define mod 1000000007
using  namespace std;
int maxgcd(int m[],int n)
{
	int m1[n+2];
	int m2[n+2];
	m1[1]=m[0];
	sort(m,m+n);
	for(int i=2;i<=n;i++)
	{
		m1[i]=__gcd(m1[i-1],m[i-1]);
	}
	m2[n]=m[n-1];
	for(int i=n-1;i>=1;i--)
	{
		m2[i]=__gcd(m2[i+1],m[i-1]);
	}
	int ans=max(ans,m2[2],m1[n-1]);
	return ans;

}
int main()
{
	fastio;
	int t;cin>>t;while(t--)
	{
		int n;cin>>n;
		int a[n];for(int i=0;i<n;i++){cin>>a[i];}
		sort(a,a+n);
		int z=maxgcd(a,n);
		a[n-1]=z;
		int sum=0;
		for(int i=0;i<n;i++)
		{
			sum+=a[i]/z;
		}
		cout<<sum<<endl;



	}
		
}