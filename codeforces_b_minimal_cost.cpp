#include<bits/stdc++.h>
#define ll long long
#define mp(a, b) make_pair(a, b)
#define pb(x) push_back(x)
#define testcase(t) ll t; cin>>t; while(t--)
using namespace std;

void quickstart(){
	#ifndef ONLINE_JUDGE
		freopen("F:/c++/input.txt","r",stdin);
		freopen("F:/c++/output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
}

void solve() {
	ll n, u, v;
	cin >> n >> u >> v;
	vector<ll> arr(n);
	for(int i=0;i<n;i++)
		cin >> arr[i];
	int maxGap = -1;
	int gap = 0;
	for(int i=0;i<n-1;i++){
		gap = abs(arr[i] -arr[i+1]);
		maxGap = max(gap, maxGap);
	}
	if(maxGap == 0){
		cout << min(v+v, u+v) << endl;
	}else if(maxGap == 1){
		cout << min(u, v) << endl;
	}else{
		cout << 0 << endl;
	}
}

int main(){
	quickstart();
	testcase(t){
		solve();
	}
}