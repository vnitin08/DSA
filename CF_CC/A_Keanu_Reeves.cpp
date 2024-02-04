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
    string r = s.substr(0, n-1);
    int c0=0,c1=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='0') c0++;
        else c1++;
    }
    

    if(n%2!=0 || c1!=c0) {
        cout << 1 << nl << s;
    }
    else{
        cout << 2 << nl << r << " " << s[n-1];
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