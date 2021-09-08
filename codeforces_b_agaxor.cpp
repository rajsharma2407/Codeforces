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
	vector<ll> arr(n);
	ll sum = 0;
	vector<int> freq(32, 0);
	auto edit = [&](int ar){
		int i, j;
		ll val = 1;
		for(i=0;i<32;i++){
			if(ar & val){
				freq[i] += 1;
			}
			val*=2;
		}
	};

	for(int i=0;i<n;i++){
		cin >> arr[i];
		edit(arr[i]);
	}
	vector<int> v;
	for(int i=0;i<32;i++){
		if(freq[i]){
			v.push_back(freq[i]);
		}
	}
	if(v.size() <= 1){
		cout << "YES\n";
	}else{
		bool poss = true;
		for(int i=0;i<v.size()-1;i++){
			if(v[i] != v[i+1]){
				poss=false;
				break;
			}
		}
		if(poss)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}

int main(){
	quickstart();
	testcase(t){
		solve();
	}
}