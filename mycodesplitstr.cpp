//myloveanshu
#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int  
#define vi vector<int>
using namespace std;
int main()
{
	fastio;
	int t;cin>>t;while(t--){
	int n;cin>>n;
	char s[n];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	map<char,int>m;
	for(int i=0;i<n;i++)
	{
		m[s[i]]++;
	}
	if(m[s[n-1]]>1)
		cout<<"YES"<<endl;
	else 
		cout<<"NO"<<endl;
	}
	return 0;
}