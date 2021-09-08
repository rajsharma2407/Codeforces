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
	ll n, m;
	cin >> n >> m;
	vector<vector<ll>> arr(n, vector<ll>(m));
	ll k=0;
	vector<ll> v1;
	for(ll i=0;i<n;i++){
		for(ll j=0;j<m;j++){
			cin >> arr[i][j];
			v1.push_back(arr[i][j]);
		}
	}
	sort(v1.begin(), v1.end());
	v1.resize(m);
	ll pos = 0;
	ll final = 0;
	for(ll i=0;i<n;i++){
		pos=0;
		sort(arr[i].begin(), arr[i].end());
		while(binary_search(v1.begin(), v1.end(), arr[i][pos]) && final < m){
			swap(arr[i][pos], arr[i][final]);
			pos++;
			final++;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout << arr[i][j] << " ";
		}
		cout << '\n';
	}
}

int main(){
	quickstart();
	testcase(t){
		solve();
	}
	return 0;
}