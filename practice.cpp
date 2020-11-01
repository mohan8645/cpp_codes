#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define umap unordered_map
bool isprime(int  n)
{
	if(n==0 || n==1)
		return false;
	for(int i=2;i*i<=n;i++)
	{
		if(!n%i)
			return false;
	}
	return true;
}
int main()
{
	fastio;
	int n;cin>>n;
	if(isprime(n))cout<<"it's a prime number"<<endl;
	else cout<<"it's not a prime number"<<endl;

	return 0;
}