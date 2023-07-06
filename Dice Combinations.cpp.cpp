#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll find(ll n,vector<ll>&dp)
{
	ll ans=0;
	ll m=1e9+7;
	if(n==0)return 1;
	if(dp[n]!=-1)return dp[n];
	for(int i=1;i<=6;i++)
	{
		if(i<=n)
		ans=(ans%m+find(n-i,dp)%m)%m;
	}
	return dp[n]=ans%m;
}
int main()
{
	ll n;
	cin>>n;
	ll ans=0;
	vector<ll>dp(n+1,-1);
	cout<<find(n,dp);
}