#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	vector<string>v;
	string s;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		v.push_back(s);
	}
	map<string,int>m;
	for(int i=0;i<n;i++)
	{
		if(m[v[i]]==0)
		{
			cout<<"OK\n";
		}
		else
		{
			cout<<v[i]<<m[v[i]]<<endl; 
		}
			m[v[i]]++;
	} 
}
int main()
{
	//int t=1;
	//cin>>t;
    //while(t--)
	solve();
}
