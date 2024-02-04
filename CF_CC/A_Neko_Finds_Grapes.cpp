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
    ll n,m; cin>>n>>m;
    vll v1(n),v2(m); 
    ll o1 =0, e1=0, o2=0, e2=0, out;
    rep(i,n){
        cin>>v1[i];
        if(v1[i]%2 ==0) e1++;
        else o1++;
    }
    rep(i,m){
        cin>>v2[i];
        if(v2[i]%2 ==0) e2++;
        else o2++;
    }
    
    cout<<min(o1,e2)+min(o2,e1);
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