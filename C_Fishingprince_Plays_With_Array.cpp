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
 
void Gyani()  
{   
     ll n,k,mx=0,mxe=0,x;
     cin>>n>>k;
     ll a[n] ;
     forn(i,n) cin>>a[i];  
     cin>>x;
     ll b[x];
     forn(i,x) cin>>b[i]; 
       
    
    vp64 v1,v2,v3,v4;
    for(int i=0;i<n;i++)
    {
        int cnt=0,p=a[i]; 
        while(p%k==0)
        p/=k; 

        if(a[i]%k==0)
        v1.pb({p,a[i]/p});
        else
        v1.pb({p,1});
    }  
     
    for(int i=0;i<x;i++)
    {
        int cnt=0,p=b[i]; 
        while(p%k==0)
        p/=k; 

        if(b[i]%k==0)
        v2.pb({p,b[i]/p});
        else
        v2.pb({b[i],1});
    } 


    v3.pb(v1[0]);
    for(int i=1;i<v1.size();i++)
    {
        if(v1[i].fi==v3.back().fi)
        v3.back().se+=v1[i].se;
        else
        v3.pb(v1[i]);
    }
    v4.pb(v2[0]);
    for(int i=1;i<v2.size();i++)
    {
        if(v2[i].fi==v4.back().fi)
        v4.back().se+=v2[i].se;
        else
        v4.pb(v2[i]);
    } 
    if(v3==v4)
    cout<<"Yes\n";
    else
    cout<<"No\n";
     
} 
 
int main()
{
	fast_cin(); 
	 ll t=1; 
 	 cin >> t; 
	while(t--){
         // cout<<"Case#i: ";
		Gyani();
	     }
	return 0;
}