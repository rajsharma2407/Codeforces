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

vector<ll> vt(1e5 + 100);
const ll m = 1e9 + 7;
void fact(){
	vt[0] = 1;
	vt[1] = 1;
	vt[2] = 2;
	for(int i=3;i<=100000;i++){
		vt[i] = (i*vt[i-1])%m;
	}
}


void solve() {
	int n, k;
	cin >> n >> k;
	ll ans = ((1<<k) - 1)%m;
	ll ans2 = (n*(n-1))%m;
	cout << ((ans2*(ans/2))%m + n)%m << endl;
}

int main(){
	quickstart();
	fact();
	testcase(t){
		solve();
	}
}