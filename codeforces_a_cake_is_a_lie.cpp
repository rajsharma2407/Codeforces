#include<bits/stdc++.h>
#define ll long long
#define testcase(t) ll t; cin>>t; while(t--)
using namespace std;

void quickstart(){
	#ifndef ONLINE_JUDGE
		freopen("F:/c++/input.txt","r",stdin);
		freopen("F:/c++/output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
}

int main(){
	quickstart();
	testcase(t){
		int n, m, k;
		cin >> n >> m >> k;
		int mx = max(n, m);
		ll ans = mx-1;
		int mn = min(m, n);
		ans += (mn - 1)*mx;
		if(ans == k){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
}