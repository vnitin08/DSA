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
	vector<ll> v(n);
    rep(i,n){
        cin>>v[i];
    }
	int c0=0,c1=0;
	    for (int i = 0; i <n; i++) {
	        if(v[i]==0) c0++;
	        else if(v[i]==1) c1++;
	    }
        
	    cout<<min(c0, c1)<<endl;
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