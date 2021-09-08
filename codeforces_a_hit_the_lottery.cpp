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
		int n;
		cin >> n;
		int x;
		ll ans = 0;
		while(n > 0){
			if(n >= 100){
				x =n/100;
				ans += x;
				n -= x*100;
			}else if(n >= 20){
				x =n/20;
				ans += x;
				n -= x*20;
			}else if(n >= 10){
				x =n/10;
				ans += x;
				n -= x*10;
			}else if(n >= 5){
				x =n/5;
				ans += x;
				n -= x*5;
			}else{
				x =n/1;
				ans += x;
				n -= x*1;
			}
		}
		cout << ans << endl;
}