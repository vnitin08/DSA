#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll M = 998244353;
const ll N = 8e5 + 10;
#define pb push_back
#define in insert
#define dl '\n'
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define sll set<ll> 
#define repr(i,n) for(ll i=n-1;i>=0;i--)
#define rep(i,n) for(ll i=0;i<n;i++)
#define all(v) v.begin(),v.end()

void solve(){
    ll n;
    cin >> n;
    ll temp = n;
    map<string, string> ig;
    map<string, ll> mm;
    ig.insert({"purple", "Power"});
    ig.insert({"green", "Time"});
    ig.insert({"blue", "Space"});
    ig.insert({"orange", "Soul"});
    ig.insert({"red", "Reality"});
    ig.insert({"yellow", "Mind"});

    mm.insert({"purple", 0});
    mm.insert({"green", 0});
    mm.insert({"blue", 0});
    mm.insert({"orange", 0});
    mm.insert({"red", 0});
    mm.insert({"yellow", 0});
    while (temp--)
    {
        string s;
        cin >> s;
        if (mm[s] == 0)
        {
            mm[s] = 1;
        }
    }
    cout << 6 - n << dl;
    for (auto it : mm)
    {
        if (it.second == 0)
        {
            string ss = it.first;
            cout << ig[ss] << dl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // int n;
    // cin>>n;
    // while (n--)
    // {
    //     solve();
    // }
    solve();
    
    
}