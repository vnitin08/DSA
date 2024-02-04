#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
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
    int n,m;
    cin>>n>>m;
    string s; cin>>s;
    int l,r;
    char c1,c2; 
    while (m--){
        cin>>l>>r>>c1>>c2;  
        for(int i=l-1; i <=r-1; i++){
            if(s[i]==c1){
                s[i]=c2;
            }
        }
        
    }
    cout<<s;  

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    
    solve();
    
    
}