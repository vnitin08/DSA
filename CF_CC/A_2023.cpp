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
    int n,k; cin>>n>>k;
    vll b(n);
    ll multi=1;
    rep(i,n){
        cin>>b[i];
        multi*=b[i];
    }
    
    if(2023%multi != 0){
        cout<<"NO"<<nl;
    }
    else{
        cout<<"YES"<<nl;
        cout<<2023/multi<<" ";
        rep(i,k-1){
            cout<<"1 ";
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