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
#define repr(i,n) for(ll i=n-1;i>=0;i--)
#define rep(i,n) for(ll i=0;i<n;i++)
#define all(v) v.begin(),v.end()

void solve(){
    ll n; cin>>n;
    vector<string> v(n,"o");
    ll f,f1=1,f2=1;
    vll b;
    b.pb(1);
    b.pb(1);
    for(ll i=2;i<n;i++){
        f=f1+f2;
        f1=f2;
        f2=f;
        b.pb(f);
    }
    int lower
    rep(i,b.size()){
        if(b[i])
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin>>t;
    // while (t--)
    // {
    //     solve();
    // }
    solve();
    
    
}