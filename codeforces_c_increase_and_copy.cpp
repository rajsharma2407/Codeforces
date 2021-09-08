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
	ll n;
	cin >> n;
	if(n == 1){
		cout << 0 << endl;
		continue;
	}
	int f = (sqrt(n));
	// if(f - (int)f > 0.5){
	// 	cout << (int)f*2 << endl;
	// }else if(f - (int)f == 0){
			
	// }else{
	// 	cout << (int)f*2-1 << endl;
	// }
	if(f*f == n){
		cout << (f-1)*2 << endl;
	}else if(f*(f+1) >= n){
		cout << f*2-1 << endl;
	}else{
		cout << f*2 << endl;
	}
}
}