#include<bits/stdc++.h>
using namespace std;
int Remove_Number(int a[],int n)
{
	map<int,int>m;
	for(int i=0;i<n;i++)
	m[a[i]]++;
	int x,y,ans=0;
	//	for(int i=0;i<n;i++)
	//	cout<<a[i]<<" ";
	for(int i=0;i<n;i++)
	{
		x=1;
		bool flag=false;
		for(int j=1;j<=32;j++)
		{
			x=x*2;
			int y=x-a[i];
			if(y==a[i]&&m[y]>=2)
			flag=true;
			else
			if(y!=a[i]&&m[y]>=1)
			flag=true;
		}
		if(!flag)
		ans++;
	}
	return ans;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<Remove_Number(a,n);
}