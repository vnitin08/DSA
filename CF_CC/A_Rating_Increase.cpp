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
    string s,a="",b=""; 
    cin>>s;
    int l=s.size();

    a=a+s[0];
    int i=1;
    for(;i<l;i++){
        if(s[i]!='0'){
            break;
        }
        else{
            a=a+s[i];
        }
    }
    for(int j=i;j<l;j++){
        b=b+s[j];
    }
    
    if(b.size()>0 ){
            int aa=stoi(a);
            int bb=stoi(b);
            if(bb>aa)
            {cout<<aa<<' '<<bb<<endl;}
            else{
                cout<<-1<<endl;
            }
    }
    else{
        cout<<-1<<endl;
    }
   
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