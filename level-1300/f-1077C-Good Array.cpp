#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,x,i;
	cin>>n; 
	vector<int>a,v;
	map<int,int>m ;
	long long s=0,sum;
	for(i=0;i<n;i++)
	{
		cin>>x;
		a.push_back(x);
		s+=x;
	} 
	v=a;
	sort(a.begin(),a.end()); 
	 
	
	for(i=0;i<n-1;i++)
	{
		sum=s-a[i];
		if(sum-a[n-1]==a[n-1])
		m[a[i]]=1;
	}
	if(s-a[n-1]-a[n-2]==a[n-2])
	m[a[n-1]]=1;
	  
	int c=0;
	for(i=0;i<n;i++)
	{
		if(m[v[i]]==1)
		c++;
	} 
	cout<<c<<endl;
	for(i=0;i<n;i++)
	{
		if(m[v[i]]==1)
		cout<<i+1<<" ";
	}  
}
int main()
{
	//int t;
	//cin>>t;
//	while(t--)
	solve();
}