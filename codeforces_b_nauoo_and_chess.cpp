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
	int n;
	cin >> n;
	int ans = n/2 +1;
	cout << ans << endl;
	int a=1, b=1;
	for(int i=1;i<=n;i++){
		cout << a << " " << b << endl;
		b++;
		if(b == ans+1){
			a++;
			b=b-1;
		}
	}
}

int main(){
	quickstart();
		solve();
}