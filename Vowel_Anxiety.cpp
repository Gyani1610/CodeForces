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
bool isPrime(ll n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
void Gyani()  
{   
     ll n,k,cnt=0;
     cin>>n;
     string s;
     cin>>s;
     string ans;
     ll i=n-1;
     while(i>=0&&s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
     {
         ans.pb(s[i]);
         i--;
     }
     
     if(i!=-1)
     ans.pb(s[i]),i--;
 
     ll j=i;
     string st="",t="";

     for(int i=j;i>=0;i--)
     {  
            string temp1="",temp2="";
            while(i>=0&&s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
            {
                string p;
                p.pb(s[i]);
                temp1=p+temp1;
                temp2.pb(s[i]);
                i--;
            }
            if(i!=-1)
            {
                string p;
                p.pb(s[i]);
                temp1=p+temp1;
                temp2.pb(s[i]);
                i--;
            } 

            cnt+=1;
            if(cnt%2==0)
            {   
                t=temp1+t;  
            }
            else
            st.append(temp2);  
            i++;
    } 
    reverse(all(ans));
    // dbg(ans);
    // dbg(st);
    // dbg(t); 
    string res=st+t+ans;
    cout<<res<<endl; 

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