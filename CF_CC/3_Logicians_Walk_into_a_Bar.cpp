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
    string s;
    vector<string> st(n,"IDK");
    cin>>s;

    ll flag=1;
    rep(i,n){

        if(s[i]=='0'){
            for(ll j=i; j<n; j++){}
            st[i]="NO";
            }
            flag=0;
        }
        if(flag==1){
            st[n-1]="YES";
        }

        // if(s[i]=='1'){
        //     cout<<"IDK"<<nl;
        // })
        // else if(s[i]=='0'){
        //     cout<<"NO"<<nl;
        // }
        // else if(s[i]=='1' && s[i+1]=='1') cout<<"YES"<<nl;
        rep(i,n){
        cout<<st[i]<<nl;
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