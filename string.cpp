#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
int main()
{		fastio;
		int t;cin>>t;while(t--){
		int x;cin>>x;
		int y=x%10;
		int cnt=0;
		while(x>0)
		{
			int r=n%10;
			n=n/10;
			cnt++;
		}
		cout<<4*(y-1)+cnt<<endl;
	}
}