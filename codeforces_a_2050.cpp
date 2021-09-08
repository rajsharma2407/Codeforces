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
	ll n;
	cin >> n;
	if(n%2050){
		cout << "-1\n";
	}else{
		ll len = n/2050;
		if(len < 10){
			cout << len << endl;
		}else{
			ll ans = 0;
			while(len){
				ans += len%10;
				len/=10;
			}
			cout << ans << endl;
		}
	}
}

int main(){
	quickstart();
	testcase(t){
		solve();
	}
}