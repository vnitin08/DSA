#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
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
    int n; cin>>n;
    vll v(n);
    int sum=0, s=0;
    rep(i,n){
        cin>>v[i];
        sum+=v[i];  
    }
    sort(all(v));
    int c=0;
    repr(i,n){
        s+=v[i];
        c++;
        if(s>ceil(sum/2)) {
            cout<<c<<nl; 
            return;
        } 
    }   
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
   
}