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
    ll n;
    cin>>n;
    string s,t;
    map<char,int>m1,m2;
    cin>>s>>t;
    for(auto i:s)m1[i]++;
    for(auto i:t)m2[i]++;
    for(auto i:m1)
    {
        if(m1[i.fi]!=m2[i.fi])
        {
            cout<<"NO\n";return;
        }
    }
    ll i=0,j=n-1;
    while(s[i]=='c')
    {
        if(s[i]==t[i])i++;
        else
        {
            cout<<"NO\n";return;
        }
    }
    while(s[j]=='a')
    {
        if(s[j]==t[j])j--;
        else
        {
            cout<<"NO\n";return;
        }
    }
    string st,tt;
    st=s.substr(i,j-i+1);
    tt=t.substr(i,j-i+1);  
     j=0;
    map<char,int>m;
    n=st.size();
    for(int i=n-1;i>=0;i--)
    { 
        if(st[i]==tt[i]){ continue;}
        if(st[i]=='c')
        { 
            if(tt[i]=='b')
            { 
                m[st[i]]++;
                i--;
                while(m['c']>0&&i>=0)
                {
                    if(st[i]=='a'||tt[i]=='a')
                    { 
                        cout<<"NO\n";return;
                    }
                    else
                    if(st[i]==tt[i])
                    {
                        i--;continue;
                    }
                    else
                    if(st[i]=='b')
                    m['c']--;
                    else
                    m['c']++;
                    i--;
                } 
                i++;
            }
            else
            { 
                cout<<"NO\n";return;
            }
        }
        else
        {
            if(st[i]=='b')
            {
                if(tt[i]=='a')
                { 
                    m[st[i]]++;
                    i--;
                    while(m['b']>0&&i>=0)
                    {
                        if(st[i]=='c'||tt[i]=='c')
                        {
                            cout<<"NO\n";return;
                        }
                        else
                        if(st[i]==tt[i])
                        {
                            i--;continue;
                        }
                        else
                        if(st[i]=='a')
                        m['b']--;
                        else
                        m['b']++;
                        i--;  
                    } 
                    i++;
                }
                else
                { 
                    cout<<"NO\n";return;
                }
            }
            else
            {  
                cout<<"NO\n";return;
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