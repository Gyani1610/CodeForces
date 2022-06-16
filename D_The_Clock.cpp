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
 bool isPal(string s)
{
	for(int i=0;i<=s.size()/2;i++)
	{
		if(s[i]!=s[s.size()-1-i])
		return false;
	}
	return true;
} 
void Gyani()  
{   
    string s;
    cin>>s;
    map<string,int>m;
    m[s]=1;
    ll x;
    cin>>x;
    ll n=stoi(s.substr(0,2))*60+stoi(s.substr(3,2));  
    ll p=n;
    ll cnt=0;
    if(isPal(s))
    cnt++;
    n=n+x; 
    while(1)
    {  
        if(n>=1440)n-=1440;
        ll k=n;
        int h=k/60; 
        int mn=k-h*60;
        string s1,s2;
        if(h<10)
        s1.pb('0'),s1.pb(h+'0');
        else
        s1=to_string(h);

        
        if(mn<10)
        s2.pb('0'),s2.pb(mn+'0');
        else
        s2=to_string(mn);

        string st;
        st=s1+":"+s2; 
        if(m[st]>0)
        {
            cout<<cnt<<endl;return;
        } 
        if(isPal(st))
        cnt++;
        n+=x;
         
    }
    cout<<cnt<<endl;

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