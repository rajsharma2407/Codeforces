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
	int n, W;
	cin >> n >> W;	
	vector<int> w(n);
	map<int, int> mp;
	for(int i=0;i<n;i++){
		cin >> w[i];
		mp[w[i]]++;
	}
	while(mp.size() != 0){
		
	}
	int height = 0;

}

int main(){
	quickstart();
	testcase(t){
		solve();
	}
}