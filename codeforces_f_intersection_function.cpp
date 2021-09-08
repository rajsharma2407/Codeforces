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
		int l, r;
		cin >> l >> r;
		ll z = 10;
		ll ans = 0;
		int i = 1;
		while(r/z > 0){
			ans += (r/z);
			i++;
			z = z*10;

		}

		ll ans1 = 0;
		i=1;
		z = 10;
		while(l/z > 0){
			ans1 += (l/z);
			i++;
			z = z*10;

		}
		ans += r;
		ans1 += l;
		cout << ans - ans1 << endl;
	}
}