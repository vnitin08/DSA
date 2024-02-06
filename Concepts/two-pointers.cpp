// Two pointers is really an easy and effective technique that is typically used for searching pairs in a sorted array.
// Q) Given a sorted array and a number x, find a pair in array whose sum is equal to x.
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 16;
    int l=0 , r=v.size()-1;
    while(l<r){
        if(v[l]+v[r]==target){
            cout<<v[l]<<" "<<v[r]<<endl;
            break;
        }
        else if(v[l]+v[r]<target){
            l++;
        }
        else{
            r--;
        }
    }
    return 0;
}