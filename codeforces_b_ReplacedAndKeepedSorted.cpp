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

int main(){
	quickstart();
	int n, q, k;
	cin >> n >> q >> k;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	vector<int> dp(n);
	dp[0] = dp[n-1]=0;
	for(int i=1;i<n-1;i++){
		dp[i] = arr[i+1] - arr[i-1] - 2;
		dp[i] += dp[i-1];
	}
	ll ans = 0;
	int l, r;
	while(q--){
		cin >> l >> r;
		ans = 0;
		if(l == r){
			ans = k - 1;
		}else{
			ans = arr[l] - 2;
			ans += k - arr[r-2] - 1;
			if(l != r-1)
				ans += dp[r-2] - dp[l-1];
		}
		cout << ans  << endl;
	}
}