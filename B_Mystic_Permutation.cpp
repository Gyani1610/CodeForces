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
    cin>>n;
    v64 v,a;
    ll slot[n+1]={0};
    ll x;
    forn(i,n)
    {
        cin>>x;
        a.pb(x); 
    }
    ll i=0;
    if(n==1)
    {
        cout<<"-1\n";return;
    }
    if(n==2)
    {
        if(a[0]==1)
        cout<<"2 1\n";
        else
        cout<<"1 2\n";
        return;
    }
    ll j=1;
    for(int i=0;i<n-3;i++)
    {
        x=a[i];
        j=1;
        while(x==j||slot[j]!=0)
        j++;
        v.pb(j);
        slot[j]=1;
    }
    v64 v1;
    forsn(i,1,n+1)
    {
        if(slot[i]==0)
        v1.pb(i);
    }
    sort(all(v1));
    i=n-1,j=2;
    for(i=n-1,j=2;i>=n-3;i--,j--)
    {
        if(a[i]==v1[j])
        break;
    }
    if(j==-1)
    {
        forn(i,n-3)
        cout<<v[i]<<" ";
        forn(i,3)
        cout<<v1[i]<<" ";
        cout<<endl;
        return;
    }
    v64 v2=v1;
    while(1)
    {
        next_permutation(all(v1));
        i=n-1,j=2;
        for(i=n-1;i>=n-3;i--,j--)
        {
            if(a[i]==v1[j])
            break;
        }
        if(j==-1)
        {
            forn(i,n-3)
            cout<<v[i]<<" ";
            forn(i,3)
            cout<<v1[i]<<" ";
            cout<<endl;
            return;
        }
        if(v2==v1)
        {
            cout<<"-1\n";return;
        }
    }
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