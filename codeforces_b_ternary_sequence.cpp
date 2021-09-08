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
	int x1, y1, z1;
	int x2, y2, z2;
	cin >> x1 >> y1 >> z1;
	cin >> x2 >> y2 >> z2;
	if(x1 >= z2){
		x1 -= z2;
		z2 = 0;
	}else{
		z2 -= x1;
		x1 = 0;
	}

	if(x1 >= x2){
		x1 -= x2;
		x2 = 0;
	}else{
		x2 -= x1;
		x1 = 0;
	}

	if(x1 >= y2){
		x1 -= y2;
		y2 = 0;
	}else{
		y2 -= x1;
		x1 = 0;
	}


	if(x2 >= y1){
		x2 -= y1;
		y1 = 0;
	}else{
		y1 -= x2;
		x2 = 0;
	}

	if(y1 >= y2){
		y1 -= y2;
		y2 = 0;
	}else{
		y2 -= y1;
		y1 = 0;
	}
	if(x2 >= z1){
		x2 -= z1;
		z1 = 0;
	}else{
		z1 -= x2;
		x2 = 0;
	}
	if(z1 >= z2){
		z1 -=z2;
		z2 = 0;
	}else{
		z2 -= z1;
		z1 = 0;
	}
	if(y1 && z2){
		cout << -2*z2 << endl;
	}else{
		cout << z1*2 << endl;
	}
}

int main(){
	quickstart();
	testcase(t){
		solve();
	}
}