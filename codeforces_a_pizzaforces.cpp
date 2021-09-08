#include<bits/stdc++.h>
#define ll long long
#define testcase(t) ll t; cin>>t; while(t--)
using namespace std;

void quickstart(){
	#ifndef ONLINE_JUDGE
		freopen("F:/c++/input.txt","r",stdin);
		// freopen("F:/c++/output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
}

int main(){
	quickstart();
	testcase(t){
		ll n;
		cin >> n;
		ll ans = 0;
		ll val = 0;
		if(n > 20){
			ans = n/10 - 1;
			n = 10 + n%10;
		}
		if(n <= 6){
			val += 15;
		}else if(n <= 8){
			val += 20;
		}else if(n <= 10){
			val += 25;
		}else if(n <= 12){
			val += 30;
		}else if(n <= 14){
			val += 35;
		}else if(n <= 16){
			val += 40;
		}else if(n <= 18){
			val += 45;
		}else if(n <= 20){
			val += 50;
		}

		cout << ans*25 + val << endl;
	}
	return 0;
}