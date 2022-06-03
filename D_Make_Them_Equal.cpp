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
int step[1001]={0};
void precomp()
{
    for(int i=2;i<=1000;i++)
    {
        step[i]=INT_MAX;
        for(int j=1;j<i;j++)
        step[i]=min(step[i],step[j]+1);
    }
}
void Gyani()  
{   
    ll n,k;
    cin>>n>>k;
    ll b[n],cost[n];
    v64 w;
    forn(i,n)
    cin>>b[i],w.pb(step[b[i]]);

    forn(i,n)
    cin>>cost[i];
    ll dp[k+1]={0};
    forn(i,n)
    cout<<w[i]<<" ";
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=k;j>0;j--)
        {
            if(w[i-1]<=j)
            dp[j]=max(dp[j-1],cost[i-1]+dp[j-w[i-1]]); 
        }
    }
    cout<<dp[k]<<endl;
} 
 
int main()
{
	fast_cin(); 
	 ll t=1; 
 	 cin >> t; 
      precomp();
	while(t--){
         // cout<<"Case#i: ";
		Gyani();
	     }
	return 0;
}