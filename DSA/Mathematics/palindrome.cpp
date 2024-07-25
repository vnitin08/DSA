#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int rev=0;
    int temp = n;
    while(temp!=0){
        int ld = temp%10;
        rev = rev*10 + ld;
        temp/=10;
    }
    if(rev==n) cout<<"True: given no. is palindrome";
    else cout<<"False";
    return 0;
}