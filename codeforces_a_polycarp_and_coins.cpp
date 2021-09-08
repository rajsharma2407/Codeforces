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
		int n;
		cin >> n;
		int ans = 0;
		ans = n/3;
		int ans2 = ans;
		if(n-ans-ans2*2 == 1){
			ans++;
		}else if(n-ans-ans2*2 == 2){
			ans2++;
		}
		cout << ans << " " << ans2 << endl;
	}
	return 0;
}