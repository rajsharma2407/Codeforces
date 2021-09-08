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
	int n, m;
	cin >> n >> m;
	ll ans = 0;
	int x;
	int prev = 1;
	while(m--){
		cin >> x;
		if(x < prev){
			ans += n-prev;
			ans += x;
			prev = x;
		}else{
			ans += x-prev;
			prev = x;
		}
	}
	cout << ans << endl;
	return 0;
}