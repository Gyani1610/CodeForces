#include<bits/stdc++.h>
using namespace std;
int n,m,c[200001],a,b,f[200001];
long long ans;
int find(int x)
{
	return !f[x]?x:f[x]=find(f[x]);
}
int main()
{
	cin>>n>>m;
	for (int i=1;i<=n;++i) cin>>c[i];
	for (int i=1;i<=m;++i)
	{
		cin>>a>>b;
		a=find(a); b=find(b);
		if (a==b) continue;
		if (c[a]>c[b]) f[a]=b;
		else f[b]=a;
	}
	for (int p=1;p<=n;++p) if (!f[p]) ans+=c[p];
	cout<<ans;
	return 0;
}