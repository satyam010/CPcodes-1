#include<iostream>
#include<cstdio>
#define MAXN 300000
using namespace std;
long long s[MAXN],m[MAXN],p[MAXN];
long long n,k,ans,l,r;
int main()
{
	cin>>n>>k;
	int x;
	for (int i=1;i<=n;++i)
	{
		scanf("%d",&x);
		s[i]=s[i-1]+x;
	}



	for (int i=n-k+1;i>=1;--i)
		if (s[i+k-1]-s[i-1]>=m[i+1])
		{
			p[i]=i;
			m[i]=s[i+k-1]-s[i-1];
		}
		else
		{
			p[i]=p[i+1];
			m[i]=m[i+1];
		}
	for (int i=1;i<=n-k+1;++i)
		if (ans<s[i+k-1]-s[i-1]+m[i+k])
		{
			ans=s[i+k-1]-s[i-1]+m[i+k];
			l=i,r=p[i+k];
		}
	cout<<l<<' '<<r<<endl;
	return 0;
}
