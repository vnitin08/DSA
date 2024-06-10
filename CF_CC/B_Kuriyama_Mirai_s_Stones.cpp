#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long double ld;
ll M = 1e9+7;
const ll N = 8e5 + 10;
const char nl = '\n';
#define pb push_back
#define F first
#define S second
#define in insert
#define ub upper_bound
#define lb lower_bound
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(), v.rend()
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
#define pll pair<ll,ll>
#define vi vector<int>
#define vll vector<ll>
#define vpll vector<pll>
#define vvll vector<vector<ll>>
#define sll set<ll> 
#define repr(i,n) for(ll i=n-1;i>=0;i--)
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<=n;i++)
#define repa(i,a,b) for (ll i = a; i < b; i++)
 
// void quickSort(vector<ll>& arr, ll start, ll end) {
//     // Base Case
//     if(start >= end) return;
//     // Recursive Case
//     int pivot = arr[end];
//     int i = start-1;
//     for(int j=start; j<end; j++) {
//         if(arr[j] < pivot) {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i+1], arr[end]);
//     quickSort(arr, start, i);
//     quickSort(arr, i+2, end);
// }

void solve(){
    ll n; cin>>n;
    vll v(n),ps(n+1),ps_sort(n+1);
    rep(i,n) cin>>v[i];
    vll original_v(v);
    ll m; cin>>m;
    ps[0]=0;
    rep1(i,n) ps[i]=v[i-1]+ps[i-1];
    sort(all(v));
    ps_sort[0]=0;
    rep1(i,n) ps_sort[i]=v[i-1]+ps_sort[i-1];
    // for (auto x: ps) cout<<x<<" ";
    while(m--){
        ll type,l,r; cin>>type>>l>>r;
        if(type==1) cout<<ps[r]-ps[l-1]<<nl;
        else cout<<ps_sort[r]-ps_sort[l-1]<<nl;
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // int t; cin>>t;
    // while(t--){
    // solve();
    // }
    solve();
   
}