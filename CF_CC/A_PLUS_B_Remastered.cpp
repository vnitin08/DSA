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
    int n; cin>>n;
    vll a(n), b(n),v;
    rep(i,n){
        cin>>a[i];
    }
    rep(i,n){
        cin>>b[i];
    }
    int flag=0;
    sort(all(a));
    sort(b.begin(), b.end(), greater<ll>());
    rep(i,n){
        v.pb(a[i]+b[i]);
        if(v[i]!=v[i+1]){
            flag=1;
        }
    }
    
    if(flag){
        cout<<-1<<nl;      
    }
    else{
        rep(i,n){
            cout<<a[i]<<" ";
        } 
        cout<<nl;
        rep(i,n){
            cout<<b[i]<<" ";
        } 
        cout<<nl;
    }
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