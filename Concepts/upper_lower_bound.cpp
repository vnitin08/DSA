//sorted already - O(log n)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++) cout<<v[i]<<" "; 
    cout<<endl;
    int x; cin>>x;
    auto it = lower_bound(v.begin(), v.end(), x);  // lower_bound returns the first element that is not less than x.
    // auto it = upper_bound(v.begin(), v.end(), x);  // upper_bound returns the first element that is greater than x.
    if(it == v.end()) cout<<-1<<endl;
    else cout<<*it<<endl;

    return 0;
}

    // int it = lower_bound(v.begin(), v.end(), x) -v.begin();  // return index.

//for map,set - already sorted container 
// auto it = m.lower_bound(x);  O(log n)   --> use this.
// auto it = upper_bound(m.begin(), m.end(), x);  O(n)