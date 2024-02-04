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
        vector<char> v;
        rep(i,n){
            if(s[i]=='P') v.pb('S');
            else if(s[i]=='R') v.pb('P');
            else if(s[i]=='S') v.pb('R');
            else v.pb(s[i]);
        }
        int flag=0;
        int x;
        ll l=ceil(n/2);                                                                                       
        if(n%2 !=0){
            l=l+1;
        }
        if(n>2){
            for (int i = 0; i < l; i++)
            {
                if(v[i]=='P') flag=1;
                
            }

            for (int i = 0; i < x; i++)
            {
                if(flag){
                    x=l;
                    v[i]='P';
                
                } 
                else if(flag && (n%2 !=0)){
                    x=l+1;
                    v[i]='P';
                
                } 
                else{
                    x=l-1;
                    v[i]='P';
                }
                
            }
        }  

        rep(i,n){
            cout<<v[i];
    }
    cout<<endl;

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