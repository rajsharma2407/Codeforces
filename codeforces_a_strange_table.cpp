#include<bits/stdc++.h>
#define ll long long
#define testcase(t) ll t; cin>>t; while(t--)
using namespace std;

void quickstart(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
}

int main(){
	quickstart();
	testcase(t){
		ll n, m, x;
		cin >> n >> m >> x;
		ll C = x/n + (x%n ? 1 : 0);
		ll R = (x%n == 0) ? n : x%n;
		cout << C + (R-1)*m << endl;
	}
}