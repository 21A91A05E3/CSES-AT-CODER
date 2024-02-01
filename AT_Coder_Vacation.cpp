#include<bits/stdc++.h>
using namespace std;

long long int vacation(long long int i,long long int j,long long int n,vector<vector<long long int>>&v,vector<vector<long long int>>&dp)
{
    if(i==n)return 0;
    long long int p1=0,p2=0,p3=0;
    if(j!=100001 and dp[i][j]!=-1)return dp[i][j];
   if(j!=0) p1=v[i][0]+vacation(i+1,0,n,v,dp);
   if(j!=1) p2=v[i][1]+vacation(i+1,1,n,v,dp);
   if(j!=2) p3=v[i][2]+vacation(i+1,2,n,v,dp);
    
    if(j!=100001)return dp[i][j]=max(p1,max(p2,p3));
    return dp[i][0]=max(p1,max(p2,p3));
    
    
}
int main()
{
    long long int n;
    cin>>n;
    long long int a,b,c;
    vector<vector<long long int>>v(n);
    for(long long int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        v[i].push_back(a);
        v[i].push_back(b);
        v[i].push_back(c);
    }
    vector<vector<long long int>>dp(n,vector<long long int>(3,-1));
    cout<<vacation(0,100001,n,v,dp);
}
