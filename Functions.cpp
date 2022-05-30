#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
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
typedef vector<p32> vp32;
typedef map<int,int> m32;
ll MOD = 1000000007;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
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

/** Number to String   **/
string tostr(ll n)
{
    string s;
    while(n)
    {
        int x=(n%10);
        s.pb(x+'0');
        n/=10;
    }
    reverse(all(s));
    return s;
}
/** string to number  **/
ll tonum(string s)
{
    ll n=0;
    for(ll i=0;i<s.size();i++)
    {
        n=n*10+(s[i]-'0');
    }
    return n;
}
/***   decimal to binary***/

string dtob(int n)
{ 
    string s = bitset<64> (n).to_string();
     
    const auto loc1 = s.find('1');
    
    if(loc1 != string::npos)
        return s.substr(loc1);
    
    return "0";
}
/*** binary  to  decimal***/
ll btod(string s)
{
	ll ans=0,n=s.size();
	ll x=1;
	rforn(i,n-1)
	{
		ans=ans+x*(s[i]-'0');
		x*=2;
	}
	return ans;
} 
/*** Palindrom**/
bool ispal(string s)
{
	for(int i=0;i<=s.size()/2;i++)
	{
		if(s[i]!=s[s.size()-1-i])
		return false;
	}
	return true;
} 
/**Nearest Power of Two**/
ll nearest_power_of_2(ll n)
{
    ll x=n&n-1;
    while(x)
    {
        x=n&n-1;

        if(x==0)
        return n;

        n=n&n-1;
    }
    return n;
}
/**seive**/
const ll maxm=100000000;
ll prime[maxm]={0};
void seive()
{
    for(int i=2;i*i<=n;i++)
    {
        if(a[i]==0)
        {
            for(ll j=i*i;j<=maxm;j+=i)
            prime[j]=1;
        }
    }
    for(int i=2;i<=maxm;i++)
    if(prime[i]==0)
    cout<<i<<" ";
}
/*** LCM  ***/
ll lcm(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}
/**power mod**/
int powermod(int a, int b)
{
    if (!b)return 1;
    int temp = powermod(a, b / 2);
    temp = (temp * temp) % mod;
    if (b % 2)return (a * temp) % mod;
    return temp % mod;
}
/**power **/
int power(int a, int b)
{
    if (!b)return 1;
    int temp = power(a, b / 2);
    temp = (temp * temp);
    if (b % 2)return (a * temp);
    return temp;
}
/**       BFS        BFS      BFS         BFS         BFS**/
void bfs(int src)
{
	queue<int>q;
	q.push(src);
	vis[src]=1;
	dis[src]=0;

	while(!q.empty())
	{
		int curr=q.front();
		q.pop();
		for(int i=0;i<a[curr].size();i++)
		{
			if(vis[a[curr][i]]==0)
			{
				vis[a[curr][i]]=1;
				dis[a[curr][i]]=dis[curr]+1;
				q.push(a[curr][i]);
			}
		}
	}
}

/**** DFS         DFS       DFS          DFS          DFS ****/
void dfs(int u)
{
	vis[u]=1; 
	for(int child :ar[u])
	{
		if(vis[child]==0)
		{
			dfs(child,value);
		}
	}
}

/** Bridge in graph**/

void dfs(ll node,ll par)
{
    vis[node]=1; 
    in[node]=timer;
    low[node]=timer;
    timer++;
    for(ll i=0;i<a[node].size();i++)
    {
        if(a[node][i]==par)continue;
        
        if(vis[a[node][i]]==1)
        {
            low[node]=min(low[node],in[a[node][i]]);  
        }
        else
        { 
            dfs(a[node][i],node);
            if(low[a[node][i]]>in[node])
            { 
                cout<<a[node][i]<<"-"<<node<<endl;
            } 
            low[node]=min(low[node],low[a[node][i]]);
        }  
    }
}
/*** LIS array which contains lis till index i. **/
void leftLIS(vector<int>arr,int n,int dp1[])
{ 
	set<ll>ans; 
	for(int i=0;i<n;i++)
	{
		auto j=ans.lower_bound(arr[i]);
		if(j!=ans.end())
		{ 
			ans.erase(j);
		}
		ans.insert(arr[i]);
		dp1[i]=ans.size();
	} 
}

/*** LIS array(dp2[]) which contains LIS from index i to n-1. **/
void rightLIS(vector<int>arr,int n,int dp2[])
{    
	set<int>ans;  
	for(int i=n-1;i>=0;i--)
	{
		auto j=ans.upper_bound(arr[i]); 
		if(j!=ans.begin())
		{
			j--;
			ans.erase(j);
		}
		ans.insert(arr[i]);
		dp2[i]=ans.size();
	}  
} 