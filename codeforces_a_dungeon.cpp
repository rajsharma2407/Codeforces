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
	ll a, b, c;
	cin >> a >> b >> c;
	ll sum = a+b+c;
	if(!(sum%9) && min({a,b,c}) >= sum/9)	
		cout << "Yes\n";
	else
		cout << "No\n";
}

int main(){
	quickstart();
	testcase(t){
		solve();
	}
}