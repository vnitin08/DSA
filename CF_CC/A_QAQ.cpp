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
    int n=s.size();
    int c=0;
    for(int i=0; i<n;i++){
        if(s[i]=='Q'){
            for (int j = i+1; i < n; j++)
            {
                if(s[j]=='Q'){
                    for(int k=i; k<n; k++){
                        if(s[j]=='A') c++;
                    }
                }
            }
            
        }
    }
    cout<<c;
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