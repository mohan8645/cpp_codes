#include<bits/stdc++.h>
using namespace std;
int main(){
    	int t;cin>>t;while(t--){
    	int n,y=0,z=0;cin>>n;
		string s;cin>>s;
		// cout<<s<<endl;
		for(auto i:s)
		{
			if(i=='0')z++;
			else y++;
		}
		// cout<<y<<" "<<z<<endl;
		if(n%2 && (z%2 || y%2))cout<<"NO"<<endl;
		else if(n%2==0 && y==z)cout<<"YES"<<endl<<1<<" "<<n<<endl;
		else{
			cout<<"YES"<<endl;
			if(y>z){
			int val= (y-z)/2;
			int cnt=val,front=0;
            for(int i=0;i<n;i++)
            {
                if(s[i]=='1')cnt--;
                else cnt++;
                if(cnt<0)
                {
                	cnt=val;
                    front=i+1;
                }
                if(!cnt)
                {
                    cout<<front+1<<" "<<i+1<<endl;
                    break;
                }
            }
        }	
        else{

        	int val=(z-y)/2;
        	int cnt=val,front=0;
        	for(int i=0;i<n;i++)
            {
                if(s[i]=='0')cnt--;
                else cnt++;
                if(cnt<0)
                {
                    front=i+1;
                    cnt=val;
                }
                if(!cnt)
                {
                    cout<<front+1<<" "<<i+1<<endl;
                    break;
                }
            }
		}

    }
}

}