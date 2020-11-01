#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
using namespace std;
int main()
{		fastio;
		int t;cin>>t;while(t--){
			int n;cin>>n;
			int l=0,r=0;
			int cnt=0;
			bool ar[n];
			for(int i=0;i<n;i++){
				cin>>ar[i];
			}
			for(int i=0;i<n;i++){
				if(ar[i]){
					l=i;
					break;}
			}
			for(int i=n-1;i>=0;i--){
				if(ar[i]){
					r=i;
					break;
				}
			}
			for(int i=l;i<=r;i++)
			{
				if(!ar[i])
				{
					cnt++;
				}
			}
			cout<<cnt<<endl;


	}
	return 0;
}