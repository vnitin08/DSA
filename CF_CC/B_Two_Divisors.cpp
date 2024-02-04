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
    ll a,b; cin>>a>>b;
    // if(a==1 && (b%2 !=0)){
    //     cout<<b*b<<nl;
    // }
    // else if(a%2 ==0 || b%2==0){
    //     cout<<b*2<<nl;
    // }
    // else if((a%2 !=0) && (b%2 != 0)) cout<<b*a<<nl;
    ll gcd = __gcd(a,b);
    // cout<<gcd<<nl;
    ll res = (a*b)/gcd;
    if(res!=b){
        cout<<res<<nl;
    }
    else{
        if(gcd==a){
            cout<<res*(b/gcd)<<nl;
        }
        else{
            cout<<res*(a/gcd)<<nl;
        }
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