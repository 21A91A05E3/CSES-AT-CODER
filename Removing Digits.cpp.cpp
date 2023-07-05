#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n;
	cin>>n;
	int d,c=0;
	while(n>0)
	{
		int t=n,m=0;
		while(t>0)
		{
			d=t%10;
			m=max(m,d);
			t=t/10;
		}
		n=n-m;
		c+=1;
	}
	cout<<c;
}