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
	int count = (n%4 == 0)?n/4-1:n/4;
	for(int i=0; i<n-1-count; i++){
		cout << "9";
	}
	cout << "8";
	for(int i=0;i<count;i++)
		cout << "8";
	cout << endl;
}

int main(){
	quickstart();
	testcase(t){
		solve();
	}
}