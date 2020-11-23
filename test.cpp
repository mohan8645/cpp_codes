int32_t main()
{
#define ONLINE_JUDGE
	freopen("input1.txt","r",stdin);
f	reopen("output1.txt","w",stdout);
#endif
tc{
	int n,ans=0;
	cin>>n;
	for(auto i=1;i<=n;i++)
		ans+=i;

cout<<ans<<endl;
}
return 0;
}