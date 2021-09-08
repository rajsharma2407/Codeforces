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
	int n;
	cin >> n;
	if(n%2 != 0){
		cout << "NO\n";
		return;
	}
	int n1 = n/2;
	int n2 = n;
	int sn1 = sqrt(n1);
	int sn2 = n2;
	if(n2%4 == 0){
		n2/=4;	
		sn2 = sqrt(n2);
	}
	if(sn1*sn1 == n1 || sn2*sn2 == n2){
		cout << "YES\n";
	}else{
		cout << "NO\n";
	}
}

int main(){
	quickstart();
	testcase(t){
		solve();
	}
}