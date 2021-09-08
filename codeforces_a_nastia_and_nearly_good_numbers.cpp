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
		ll a, b;
		cin >> a >> b;
		if(b == 1){
			cout << "NO\n";
			continue;
		}
		cout << "YES\n";
		if(a == 1){
			cout << "1 "<< b << " " << b+1 << endl;
			continue;
		}
		if(a*b - a == a){
			cout << a << " " << a*b << " " << (a*b)+a;
		}else{
			cout << a << " " << a*b-a << " " << a*b;
		}
		cout << endl;
	}
}