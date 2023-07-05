#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
ll find(int n,ll c[],ll x,vector<ll>&dp)
{
	ll ans=INT_MAX;
	if(x==0)return 0;
	if(dp[x]!=-1)return dp[x];
	for(int i=0;i<n;i++)
	{
		if(x-c[i]>=0)
		{
			ans=min(ans,1+find(n,c,x-c[i],dp));
		}
	}
	return dp[x]=ans;
}

int main()
{
	int n;
	cin>>n;
	ll x;
	cin>>x;
	ll c[n];
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
	}
	vector<ll>dp(1000001,-1);
	ll res=find(n,c,x,dp);
	if(res!=INT_MAX)cout<<res;
	else cout<<-1;

}