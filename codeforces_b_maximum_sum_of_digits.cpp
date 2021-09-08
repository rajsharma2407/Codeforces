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
	ll len = log10(n);
	ll power = pow(10, len);
	ll no1 = n - (n%power) - 1;
	ll no2 = n - no1 ;
	ll sum = 0;
	while(no1){
		sum += no1%10;
		no1/=10;
	}

	while(no2){
		sum += no2%10;
		no2/=10;
	}
	cout << sum << endl;
}

int main(){
	quickstart();
	solve();
}