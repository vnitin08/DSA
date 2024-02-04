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
    ll n;
    cin>>n;
    vvll v(n,vll (4));
    vll sumv(n);
    ll s1=0;
    for(int i=0;i<n;i++){
       ll sum =0;
        for(int j=0;j<4;j++){ 
            cin>>v[i][j];
            sum+=v[i][j];
        }
        sumv[i] = sum;
    }
    s1=sumv[0];
    sort(sumv.begin(), sumv.end());
    reverse(sumv.begin(), sumv.end());
    
    int rank;
    for (int i = 0; i < n; i++) {    
        if(sumv[i]==s1){
            rank=i+1;
            break;
        }
    } 
    cout<<rank;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    
    solve();
    
    
}