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
    string s;
    cin>>s;
    int c1=0,c2=0,c3=0;
    for (int i = 0; i < s.size(); i++)
    {
       if(s[i]=='1') c1++;
       if(s[i]=='2') c2++;
       if(s[i]=='3') c3++;
    }
    string out="";
    for (int i = 0; i < c1; i++){
      out+="1+";
    }
    for (int i = 0; i < c2; i++){
      out+="2+";
    }
    for (int i = 0; i < c3; i++){
      out+="3+";
    }
    out = out.substr(0, out.length() - 1);
    cout << out;
    
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