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
    string s; cin>>s;
    string s1 = "";
    // reverse(all(s));
    ll i=n-1;
    while(i>=0){
            if(s[i]=='a'|| s[i]=='e'){ 
                s1+='.';
                s1+=s[i];
                s1+=s[i-1];
                i=i-2;
            }
        else {
                s1+='.';
                s1+=s[i];
                s1+=s[i-1];
                s1+=s[i-2];
                i=i-3;
        }
        
    }
    reverse(all(s1));
    s1.erase(s1.size()-1);
    cout<<s1<<nl;
    
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