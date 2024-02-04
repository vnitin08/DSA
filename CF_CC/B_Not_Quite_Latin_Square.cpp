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
    int n=3;
    string s1;
    while(n--){
        string s; cin>>s;
        rep(i,3){
            if(s[i]=='?'){
                s1 =s;
            }
            
        }
    }
    // cout<<s1;
    int flagA=0,flagB=0,flagC=0;
    rep(i,3){
        if(s1[i]=='A') flagA=1;
        else if(s1[i]=='B') flagB=1;
        else if(s1[i]=='C') flagC=1;
        
    }
    if(flagA==0) cout<<'A'<<nl;
    else if(flagB==0) cout<<'B'<<nl;
    else if(flagC==0) cout<<'C'<<nl;
    // cout<<nl;

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