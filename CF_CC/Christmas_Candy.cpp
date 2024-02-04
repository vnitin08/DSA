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
#define repa(i,a,n) for(ll i=a;i<n;i++)
#define all(v) v.begin(),v.end()

void solve(){
    ll n; cin>>n;
    vll v(n);
    ll c=0;
    rep(i,n){
        cin>>v[i];
    }
    ll max=v[0];
    repa(i,1,n){
        if(max>v[i])c++;
        else max=v[i];
    }
    cout<<c<<nl;

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