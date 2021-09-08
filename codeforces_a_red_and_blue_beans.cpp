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
		int r, b, d;
		cin >> r >> b >> d;
		int mx = max(r, b);
		int mn = min(r, b);
		int val = ceil((double)mx/ mn);
		if(val-1 > d){
			cout << "NO\n";
		}else{
			cout << "YES\n";
		}
	}
}