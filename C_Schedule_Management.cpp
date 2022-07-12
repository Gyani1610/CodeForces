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
bool check(ll n,v64 v)
{
    ll c=0;
    for(int i=v.size()-1;i>=0;i--)
    {
        if(n<v[i])
        c+=(v[i]-n)*2;
        else
        if(v[i]<n)
        {
            ll d=n-v[i];
            c-=((d/2)*2);
        }
    }
    if(c<=0)
    return true;
    else
    return false;
} 
void Gyani()  
{   
    ll n,m;
    cin>>n>>m;
    ll a[m];
    m64 mp;
    forn(i,m)
    cin>>a[i],mp[a[i]]++;
    ll mx=INT_MIN,mn=INT_MAX;
    v64 v;

    for(auto i:mp)
    v.pb(i.se),mx=max(mx,i.se),mn=min(mn,i.se);
    sort(all(v));
    while(v.size()<n)
    v.pb(0);
    ll l=1,r=mx;
    ll ans=mx,mid; 
    // forn(i,v.size())
    // cout<<v[i]<<" "; 
    while(l<=r)
    {
        mid=(r+l)/2; 
        if(check(mid,v))
        {
            ans=min(ans,mid);
            r=mid-1;
        }
        else
        l=mid+1;
    }
    cout<<ans<<endl;
 
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