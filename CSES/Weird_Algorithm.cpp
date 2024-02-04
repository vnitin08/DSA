#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
ll M = 998244353;
const ll N = 8e5 + 10;
#define pb push_back
#define in insert
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define sll set<ll> 
#define repr(i,n) for(ll i=n-1;i>=0;i--)
#define rep(i,n) for(ll i=0;i<n;i++)
#define all(v) v.begin(),v.end()

void solve(){
    ll n;
    cin >> n;

    while (true) {
        cout << n << " ";
        if (n == 1) break;
        if (n%2 == 0) n /= 2;
        else n = n*3+1;
    }
    cout << "\n";
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