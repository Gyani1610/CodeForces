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
    ll n,m,k;
    cin>>n>>m>>k;
     string a,b,c;
     cin>>a>>b;
     ll i=0,j=0,cnt1=0,cnt2=0;
     sort(all(a));
     sort(all(b)); 
     while(i<n&&j<m)
     {
         if(a[i]<b[j])
         {
             if(cnt1<k)
             {
                 c.pb(a[i]);
                 i++;cnt1++;
                 if(cnt1==1)cnt2=0;
             }
             else
             {
                 c.pb(b[j]);j++;cnt1=0;cnt2++;
             }
         }
         else
         {
             if(cnt2<k)
             {
                 c.pb(b[j]);
                 j++;cnt2++;
                 if(cnt2==1)cnt1=0;
             }
             else
             {
                 cnt2=0;
                 c.pb(a[i]);
                 i++;cnt1++;
             }
         }
     } 
     cout<<c<<endl;
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