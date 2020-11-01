#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
bool isprime(int n)
{
	if(n==0 || n==1)
		return 0;
	for(int i=2;i*i<=n;i++)
		{if(n%i==0)
			return false;}
	return true;
}
int main()
{
	int t;cin>>t;while(t--){
	int n;cin>>n;
	if(isprime(n))
		cout<<"entered number is a prime number "<<endl;
	else 
		cout<<"entered number is not a prime number "<<endl;}
	return 0;
}