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
    string s; cin>>s;
    int n = s.size();
    vector<int> v;
    v.pb(0);
    rep(i,n){
        if(s[i]==s[i+1]) v.pb(1);
        else v.pb(0);
    }
    vll p(n);
    p[0]=v[0];
    rep1(i,n) p[i]=p[i-1]+v[i];
    ll m; cin>>m;
    while(m--){
        ll l,r; cin>>l>>r;
        cout<<p[r-1] - p[l-1]<<nl;
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
   
}