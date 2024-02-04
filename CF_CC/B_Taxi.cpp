#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long double ld;
ll M = 1e9+7;
const ll N = 8e5 + 10;
const char nl = '\n';
#define pb push_back
#define F first
#define S second
#define in insert
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(), v.rend()
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
#define pll pair<ll,ll>
#define vll vector<ll>
#define vpll vector<pll>
#define vvll vector<vector<ll>>
#define sll set<ll> 
#define repr(i,n) for(ll i=n-1;i>=0;i--)
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<n;i++)
#define repa(i,a,b) for (ll i = a; i < b; i++)
ll gcd (ll a, ll b) {
  return b ? gcd (b, a % b) : a;
}


void solve(){
    ll n; cin>>n;
    ll res=0, c1=0,c2=0,c3=0;
    vll v(n);
    rep(i,n){
        cin>>v[i];
        if(v[i]==1)c1++;
        if(v[i]==2)c2++;
        if(v[i]==3)c3++;
        if(v[i]==4) res++;
    } 
    int m = min(c1,c3);
    res+=m;
    c1-=m; c3-=m;
    m = min((c1+1)/2,c2);
    res+=m;
    c1-=m*2; c2-=m;
    res+=(c1+3)/4;
    res+=(c2+1)/2;
    res+=c3;  
    cout<<res;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
   
}