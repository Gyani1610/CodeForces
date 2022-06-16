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
    ll n,k,x;
    cin>>n; 
    m64 m;
    v64 v;
    forn(i,n)
    {
        cin>>x; 
        v.pb(x%10);
        m[x%10]++;
    } 
    sort(all(v));
    map<ll,vp64>mpp;
    mpp[0]={{1,2},{0,3},{6,7},{5,8},{4,9}};
    mpp[1]={{1,1},{3,9},{6,6},{5,7},{4,8}};
    mpp[2]={{2,9},{5,6},{4,7},{3,8}};
    mpp[3]={{4,6},{3,7},{5,5}};
    mpp[4]={{4,5}};
    mpp[5]={{9,9}};
    mpp[6]={{8,9}};
    mpp[7]={{7,9},{8,8}}; 
// for(auto i:m)
// cout<<i.fi<<" "<<i.se<<",";
// cout<<endl; 
    for(auto i:v)
    {  
        for(auto j:mpp[i])
        {
            m64 m1;
            m1[i]++;
            ll l=j.fi,r=j.se;
            m1[l]++;m1[r]++;
             if(m1[i]<=m[i]&&m1[l]<=m[l]&&m1[r]<=m[r])
            { 
                 cout<<"YES\n";return;
            } 
        }
    }
    cout<<"NO\n";

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