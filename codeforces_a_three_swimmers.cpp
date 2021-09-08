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
		ll p, a, c, b;
		cin>>p>>a>>b>>c;
		ll ans = 0;
		if(p%a == 0 || p%b == 0 || p%c == 0){
			ans = 0;
		}else{
			ans = (a - (p%a));
			ans = min(ans, min(b-(p%b), (c-(p%c))));
		}
		cout << ans << endl;
	}
}