#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll M = 998244353;
const ll N = 8e5 + 10;
#define pb push_back
#define nl '\n'
#define in insert
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define sll set<ll> 
#define repr(i,n) for(ll i=n;i>=1;i--)
#define rep(i,n) for(ll i=0;i<n;i++)
#define all(v) v.begin(),v.end()

void solve(){
    ll n; cin>>n;
    vll v(n),x;
    map<ll,ll> mpp;
    rep(i,n){
        cin>>v[i];
    }
    ll c=0,ans=1;
    sort(all(v));
    repr(i,n){
        c=0;
        
        rep(j,n){
            if(v[j]>=i) c++;
        }
        if(c>=i){
            ans=i; 
            break;
        } 
    }
    cout<<ans<<nl;


}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    //solve();
    
    
}