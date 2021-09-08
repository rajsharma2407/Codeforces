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
		ll a, b, x, y, n;
		cin >> a >> b >> x >> y >> n;
		if(x < y){
			if(b <= a && b-y >= n){
				b -= n;
			}else if(a-x >= n){
				a -= n;
			}else{
				n -= (a-x);
				a = x;
				b -= min(n, b-y);
			}
		}else{
			if(a <= b && a-x >= n){
				a -= n;
			}else if(b-y >= n){
				b -= n;
			}else{
				n -= (b-y);
				b = y;
				a -= min(n, a-x);
			}
		}
		cout << a*b << endl;
	}
}