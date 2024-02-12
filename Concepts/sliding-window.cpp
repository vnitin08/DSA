// find the max sum of k elements in given vector
// Time Complexity: O(n)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=10;
    vector<int> v = {4,5,6,3,1,4,8,5,7,6};
    int k=3,sum=0,maxSum=0;
    for (int i = 0; i < k; i++) sum+=v[i];
    maxSum = sum;
    int i=0,j=k;
    while(j<n){
        sum-= v[i];
        sum+= v[j];
        maxSum=max(maxSum,sum);
        i++,j++;
    }
    cout<<maxSum;

    return 0;
}