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
	int n;
	cin >> n;
	vector<int> arr(n);
	map<int, int> freq;
	for(int i=0;i<n;i++){
		cin >> arr[i];
		freq[arr[i]]++;
	}
	set<int> s(arr.begin(), arr.end());
	int n
}

int main(){
	quickstart();
		solve();
}