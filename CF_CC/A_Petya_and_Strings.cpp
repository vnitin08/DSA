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
    string s1,s2; cin>>s1>>s2;
    transform(all(s1), s1.begin(), ::tolower);
    transform(all(s2), s2.begin(), ::tolower);
    // int flag0=0,flag1=0,flag2=0;
    // rep(i,s1.size()){
    //     if(s1[i]<s2[i]) {flag0=1; break;}
    //     else if(s1[i]>s2[i]) {flag1=1; break;}  
    //     else if(s1==s2) {flag2=1; break;}
    // }
    // if(flag0) cout<<-1;
    // else if(flag1) cout<<1;
    // else if(flag2) cout<<0;
    
    if(s1==s2) cout<<0;
    else if(s1<s2) cout<<-1;
    else if(s1>s2) cout<<1;
      
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
    
}