#include<bits/stdc++.h>
#define ll long long
#define testcase(t) ll t; cin>>t; while(t--)
using namespace std;

void quickstart(){
    #ifndef ONLINE_JUDGE
        freopen("F:/c++/input.txt","r",stdin);
        freopen("F:/c++/output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
}
ll *dp = new ll[100000+5]();;
ll solve(int i, ll *arr, int maxSize){
    if(i == maxSize){
        return arr[i]*i;
    }else if(i == maxSize-1){
        return max((maxSize-1)*arr[i], arr[i+1]*(i+1));
    }else{
        if(dp[i])
            return dp[i];
        return (dp[i] = max(solve(i+1, arr, maxSize), arr[i]*i + solve(i+2, arr, maxSize)));
    }
}
// ll findSum(int *arr, int maxNum, int index = 0) {
//  if (index >= maxNum - 1) {
//      return arr[index] * index;
//  }
//  return max(findSum(arr, maxNum, index + 1), findSum(arr, maxNum, index + 2) + arr[index] * index);
// }    

int main(){
    quickstart();
        int n;
        cin >> n;
        ll *arr = new ll[100000+5]();
        int x;
        int maxSize = 0;
        for(int i=0;i<n;i++){
            cin >> x;
            arr[x]++;
            maxSize = max(maxSize, x);
        }
        ll ans = solve(0, arr, maxSize);
        cout << ans << endl;
}