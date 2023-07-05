#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
ll find(int n,ll c[],ll x,vector<ll>&dp)
{
	ll ans=0;
	ll m=1e9+7;
	if(x==0)return 1;
	if(dp[x]!=-1)return dp[x];
	for(int i=0;i<n;i++)
	{
		if(x-c[i]>=0)
		{
			ans+=(find(n,c,x-c[i],dp)%m)%m;
		}
	}
	return dp[x]=ans%m;
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
	cout<<find(n,c,x,dp);
 