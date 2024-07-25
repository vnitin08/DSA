// count the digit of the given number , input > 0

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x; cin>>x;
    int res = 0;
    while(x>0){
        x/=10;
        res++;
    }
    cout<<res;
    return 0;
}

// time complexity : theta(d)      , d: no of digits.