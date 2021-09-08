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
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if(max(a, b) < min(c, d) || max(c, d) < min(a, b)){
			cout << "NO\n";
		}else{
			cout << "YES\n";
		}
	}
}