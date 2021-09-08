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
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin >> v[i];
	bool poss = true;
	bool equal = true;
	for(int i=0;i<n;i++){
		int z = sqrt(v[i]);
		if(z*z != v[i]){
			poss=false;
			break;
		}
	}
	if(poss)
		cout << "NO\n";
	else
		cout << "YES\n";
}

int main(){
	quickstart();
	testcase(t){
		solve();
	}
}