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

string getSubSeq(string s, int n)
{
    string res = "";
    int cr = 0;
    while (cr < n) {
 
        char mx = s[cr];
        for (int i = cr + 1; i < n; i++)
            mx = max(mx, s[i]);
        int lst = cr;
 
        for (int i = cr; i < n; i++)
            if (s[i] == mx) {
                res += s[i];
                lst = i;
            }
 
        cr = lst + 1;
    }
    return res;
}


void solve(){
    ll n; cin>>n;
    string s;
    cin>>s;
    // cout << getSubSeq(s, n)<<endl;
    string v = getSubSeq(s, n);
    char test[] = v ;
    rotate( test, test+24, test+sizeof(test)-1 ) ;
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