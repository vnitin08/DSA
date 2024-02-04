#include<bits/stdc++.h>
using namespace std;

int ans(vector<int> arr, int l, int r)
{
    int prefix_sum = 0;
    int max_prefix_sum = INT_MIN;
    for (int i = l; i <= r; i++) {
        prefix_sum += arr[i];
        max_prefix_sum = max(max_prefix_sum, prefix_sum);
    }   
    return max_prefix_sum;
}
int main(){
    vector<int> arr = { -1, 2, 3, -5 };
    cout << ans(arr, 0, 3) << endl;
    cout << ans(arr, 1, 3) << endl;
    return 0;
}       