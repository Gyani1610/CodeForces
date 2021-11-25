#include<bits/stdc++.h>
using namespace std;
int solve()
{
	string a,b;
	int n,i;
	cin>>n;
	cin>>a>>b;
	int change_bit=0,swap_bit=0;
	for( i=0;i<n-1;i++)
	{
		if(a[i]!=b[i])
		{
			if(a[i]==b[i+1]&&a[i+1]==b[i])
			{
				swap_bit++;
				i++;
			}
			else
			change_bit++;
		}
		else
		continue;
	}
	if(a[i]!=b[i])
	change_bit++;
	cout<<swap_bit+change_bit<<endl;
	 
}
int main()
{
	solve();
}