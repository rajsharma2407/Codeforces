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
	int n, q;
	cin >> n >> q;
	list<int> arr;
	int z;
	for(int i=0;i<n;i++){
		cin >> z;
		arr.push_back(z);
	}

	int query;
	while(q--){
		cin >>query;
		int pos = 1;
		auto it = arr.begin();
		for(it=arr.begin(); it!=arr.end(); it++){
			if(*it == query)
				break;
			pos++;
		}
		arr.erase(it);
		arr.push_front(query);
		cout << pos<< " ";
	}						
	cout << '\n';
}

int main(){
	quickstart();
	// testcase(t){
		solve();
	// }
}