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
		int x, y, a, b;
		cin >> x >> y >> a >> b;
		int ans = 0;
		while(max(x, y) >= max(a, b) && min(x, y) >= min(a, b)){
			int z = min(max(x, y)/max(a, b), min(x, y)/min(a, b));
			if(z > 1)
				z /= 2;
			ans += z;
			if(x > y){
				if(a > b){
					x -= a*z;
					y -= b*z;	
				}else{
					x -= b*z;
					y -= a*z;
				}
			}else{
				if(a < b){
					x -= a*z;
					y -= b*z;
				}else{
					x -= b*z;
					y -= a*z;
				}
			}
		}
		cout << ans << endl;
	}
}