#include<bits/stdc++.h>
#define ll long long
#define testcase(t) ll t; cin>>t; while(t--)
using namespace std;

void quickstart(){
	#ifndef ONLINE_JUDGE
		freopen("F:/c++/input.txt","r",stdin);
		// freopen("F:/c++/output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
}

int main(){
	quickstart();
	testcase(t){
		int n;
		cin >> n;
		vector<ll> arr(n);
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		ll ans = -1;
		for(int i=0;i<n-1;i++){
			ans = max(ans, arr[i]*arr[i+1]);
		}
		cout << ans << endl;
	}
	return 0;
}