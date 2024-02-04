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
    vector<int> v1(n);
    for (int i = 0; i < n; i++){
        cin>>v1[i];
    }
    int m; cin>>m;
    vector<int> v2(m);
    for (int i = 0; i < m; i++){
        cin>>v2[i];
    }

    sort(all(v1));
    sort(all(v2));

    cout<<v1[n-1]<<" "<<v2[m-1];
    
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