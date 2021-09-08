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
	int n, k;
	cin >> n >> k;
	if(n%2 != 0){
		cout << "1 " << (n-1)/2 << " " << (n-1)/2 << endl;
	}else{
		int ans = n/2;
		if(ans%2 == 0){
			cout << ans <<" " <<ans/2 << " " << ans/2<<endl;
		}else{
			cout << "2 " << ans-1 << " " << ans-1<<endl;
		}
	}
}

int main(){
	quickstart();
	testcase(t){
		solve();
	}
}