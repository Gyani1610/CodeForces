#include <bits/stdc++.h>  
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<pair<p64,ll>> vpp64;
typedef vector<p32> vp32;
typedef map<int,int> m32;
typedef map<ll,ll> m64;
ll MOD = 1000000007;
double eps = 1e-12;
#define forn(i,e) for(int i = 0; i < e; i++)
#define forsn(i,s,e) for(int i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size()) 
vector<int>adj[200001];
int vis[200001];
int dis[200001];
void bfs(ll src)
{
	queue<ll>q;
	q.push(src);
	
    vis[src]=1;
	dis[src]=0;

	while(!q.empty())
	{
		int curr=q.front();
		q.pop();
		for(int i=0;i<adj[curr].size();i++)
		{
			if(vis[adj[curr][i]]==0)
			{
				vis[adj[curr][i]]=1;
				dis[adj[curr][i]]=dis[curr]+1;
				q.push(adj[curr][i]);
			}
		}
	}
}
m64 m;
void dfs(int u,v64 &temp,ll sz,int &f)
{
    vis[u]=1;
    if(m[u]!=0)
    temp.pb(u);  
    if(temp.size()==sz)
    f=1; 
    for(auto i:adj[u])
    {
        if(vis[i]==0)
        { 
            dfs(i,temp,sz,f);
        } 
    } 
    if(m[u]>0)
    temp.pop_back();
}
void Gyani()  
{   
    ll n,k;
    cin>>n;
    for(int i=0;i<=n;i++)
    vis[i]=0,dis[i]=0,adj[i].clear(); 
    forn(i,n-1)
    {
        ll x,y;
        cin>>x>>y; 
        adj[x].pb(y); 
        adj[y].pb(x);
    }
    bfs(1);

    ll q;
    cin>>q;
    // dbg(q);
    while(q--)
    {
        ll sz;
        cin>>sz;
        // dbg(sz);
        ll a[sz];
        forn(i,sz)
        cin>>a[i],m[a[i]]++;
        ll mx=a[0];
        forsn(i,1,sz)
        {
            if(dis[mx]<dis[a[i]])
            mx=a[i];
        }
        forn(i,n+1)
        vis[i]=0;

        // dbg(mx);
        v64 temp;
        int f=0;
         dfs(mx,temp,sz,f);
         if(f)
        cout<<"YES\n"; 
        else
        cout<<"NO\n";
        m.clear();
    }
     
    

} 
 
int main()
{
	fast_cin(); 
	 ll t=1; 
 	// cin >> t; 
	while(t--){
         // cout<<"Case#i: ";
		Gyani();
	     }
	return 0;
}