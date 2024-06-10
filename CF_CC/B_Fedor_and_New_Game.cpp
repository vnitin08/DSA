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
#define ub upper_bound
#define lb lower_bound
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(), v.rend()
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
#define pll pair<ll,ll>
#define vi vector<int>
#define vll vector<ll>
#define vpll vector<pll>
#define vvll vector<vector<ll>>
#define sll set<ll> 
#define repr(i,n) for(ll i=n-1;i>=0;i--)
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<n;i++)
#define repa(i,a,b) for (ll i = a; i < b; i++)
 
 int countOnesInBinary(ll n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1; // Right shift by 1 to check the next bit
    }
    return count;
}

void solve(){
    ll n,m,k; cin>>n>>m>>k;
    vll v(m+1);
    rep(i,m+1) cin>>v[i];
    ll fedor = v[m];
    ll ans=0;
    rep(i,m){
        if(countOnesInBinary(fedor^v[i]) <= k) ans++;     
    }
    cout<<ans<<nl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}