#include<bits/stdc++.h>
using namespace std;
bool sortcol(vector<int>&v1,vector<int>&v2)
{
	return v1[0]>v2[0];
} 
void solve()
{
	int n,m,x,y;
	cin>>n;
	vector<int>a,b,c;
	map<int,int>mp;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		a.push_back(x);
		mp[x]++;
	}
	//map<int,int>::iterator it;
	//for(it=mp.begin();it!=mp.end();it++)
    // cout<<it->first<<"="<<it->second<<endl; 
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>x;
		b.push_back(x); 
	} 
	for(int i=0;i<m;i++)
	{
		cin>>y; 
		c.push_back(y);
	}  
	vector<vector<int> >res;
	vector<int>temp;
	for(int i=0;i<m;i++)
	{ 
		temp.push_back(mp[b[i]]);
		temp.push_back(mp[c[i]]);
		temp.push_back(i); 
		res.push_back(temp);
		temp.clear();
	} 
	sort(res.begin(),res.end(),sortcol);
	vector<pair<int,int> >ans; 
	for(int i=0;i<res.size();i++)
	{
		if(i==0)
		ans.push_back({res[i][1],res[i][2]});
		else
		{
			if(res[i][0]==res[i-1][0])
			{
				ans.push_back({res[i][1],res[i][2]});
			}
			else
			break;
		} 
	} 
	sort(ans.begin(),ans.end()); 
	cout<<ans[ans.size()-1].second+1<<endl;
	 
}
int main()
{ 
     //while(1)
	solve();
}