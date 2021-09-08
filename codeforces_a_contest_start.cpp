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
		ll n, x, t;
		cin >> n >> x >> t;
		ll a = t/x;
		ll ans = 0;
		if(n <= a){
			ans = n*(n-1)/2;
		}else{
			ans = (n-a)*a;
			ans += a*(a-1)/2;
		}
		cout << ans << endl;
	}
}