#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define vi vector<int>
#define vc vector<char>
using namespace std;
int main()
{
	int t;cin>>t;while(t--)
	{
		int n;cin>>n;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(j>0)
					cout<<" ";
				if(i==j || i==j+1 || i==j-1)
					cout<<"1";
				else 
					cout<<0;
			}
			cout<<endl;
		}
	}
	return 0;

}