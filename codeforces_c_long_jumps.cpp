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
	testcase(t){
		int n;
		cin >> n;
		vector<int> v;
		ll x;
		for(int i=0;i<n;i++){
			cin >> x;
			v.push_back(x);
		}
		vector<int> dp(n);
		for(int i=n-1;i>=0;i--){
			dp[i] = v[i];
			int j = i + v[i];
			if(j < n){
				dp[i] += dp[j];
			}
		}
		cout << *max_element(dp.begin(), dp.end()) << endl;
	}
}