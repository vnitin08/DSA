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
#define repr(i,n) for(ll i=n;i>=1;i--)
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<n;i++)
#define repa(i,a,b) for (ll i = a; i < b; i++)
ll gcd (ll a, ll b) {
  return b ? gcd (b, a % b) : a;
}
 
void solve(){
    int w,h,u1,d1,u2,d2; cin>>w>>h>>u1>>d1>>u2>>d2;
    int wei = w;
    repr(i,h){
        wei+=i;
        if(d1==i){
            wei-=u1;
            if(wei<0) wei=0;
        }
        else if(d2==i){
            wei-=u2;
            if(wei<0) wei=0;
        }
        
    }
    cout<<wei;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // int t; cin>>t;
    // while(t--){
    // solve();
    // }
    solve();
   
}