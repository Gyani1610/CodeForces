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
     ll n,k,cnt=0;
     cin>>n;
     ll a[n];
     forn(i,n)
     cin>>a[i];
     ll neg=0,pos=0;
     ll sum=0,f=0; 
     v64 v;
     forn(i,n)
     {
        if(a[i]<0)
        neg++;
        else
        if(a[i]>0)
        pos++; 
        sum+=a[i];
        if(a[i]==0)f=1;
        else
        v.pb(a[i]);
     }
     if(neg>2||pos>2)
     {
        cout<<"NO\n";return;
     } 
     
     if(f==1)
     v.pb(0);
     m64 m;
     forn(i,v.size())
     m[v[i]]=1;

     for(int i=0;i<v.size();i++)
     {
        for(int j=i+1;j<v.size();j++)
        {
            for(int k=j+1;k<v.size();k++)
            {
                if(m[v[i]+v[j]+v[k]]!=1)
                {
                    cout<<"NO\n";return;
                }
            }
        }
     }
     cout<<"YES\n";
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