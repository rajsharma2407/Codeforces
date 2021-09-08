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
	int n, k;
	cin >> n >> k;
	vector<int> arr(n)	;
	for(int i=0;i<n;i++)
		cin >> arr[i];
	int x = k;
	for(int i=0;i<n;i++){
		if(arr[i] > 0 && i < n-1){
			int mn = min(arr[i], k);
			arr[i] -= mn;
			k -= mn;
		}
		if(i == n-1){
			arr[i] += x-k;
		}
		cout << arr[i] << " ";
	}
		cout << endl;
}

int main(){
	quickstart();
	testcase(t){
		solve();
	}
}