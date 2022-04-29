#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define vi vector<int>
#define pb push_back
#define endl "\n"
using namespace std;
bool isarraysorted(int arr[],int size)
{
	if(size==0 || size==1)
		{return true;}
	if(arr[0]>arr[1])
		{return false;}
	bool isSmallerarrsorted=isarraysorted(arr+1,size-1);
	return isSmallerarrsorted;
}
int main()
{
	fastio;
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;cin>>n;
	int a[n];for(int i=0;i<n;i++){cin>>a[i];}
	cout<<isarraysorted(a,n);

}