#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
	int t;cin>>t;while(t--)
	{
		int n;cin>>n;
		int a[n];
		bool b[n];
		int cnt=0;
		bool flag=1;
		for(int i=0;i<n;i++){
			cin>>a[i];}
		for(int i=0;i<n;i++)
			cin>>b[i];
		for(int i=0;i<n-1;i++){
				if(b[i]==b[i+1])
				{
					cnt++;
				}
			}
		for(int i=0;i<n-1;i++)
		{
			if(a[i+1]<a[i])
			{
				if(cnt==n-1)
				{
					flag=0;
					cout<<"NO"<<endl;
					break;}
			}			
		}
		if(flag==1)
			cout<<"YES"<<endl;

	}
}