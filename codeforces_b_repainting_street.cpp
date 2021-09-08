#include<bits/stdc++.h>
#define ll long long
#define mp(a, b) make_pair(a, b)
#define pb(x) push_back(x)
#define FOR(n) for(int i=0;i<n;i++)
#define testcase(t) ll t; cin>>t; while(t--)
using namespace std;

void quickstart(){
	#ifndef ONLINE_JUDGE
		freopen("F:/c++/input.txt","r",stdin);
		freopen("F:/c++/output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
}

bool comp1(pair<int,int> x, pair<int, int> y){
	return x.second < y.second;
}

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	int j=0;
	int ans = 0;
	int best = INT_MAX;
	for(int i=1;i<=100;i++){
		ans = 0;
		j=0;
		while(j < n){
			if(v[j] == i){
				j++;
			}else{
				ans += 1;
				j += k;
			}
		}
		best = min(best, ans);
	}
	cout << best << endl;
}

int main(){
	quickstart();
	testcase(t){
		solve();
	}
}