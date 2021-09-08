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
	int n, l, r;
	cin >> n >> l >> r;
	vector<int> L(l);
	vector<int> R(r);
	map<int, int> lmap;
	map<int, int> rmap;
	for(int i=0;i<l;i++){
		cin >> L[i];
		lmap[L[i]]++;
	}
	for(int i=0;i<r;i++){
		cin >> R[i];
		rmap[R[i]]++;
	}
	int counter = 0;
	int total = 0;
	for(int i=0;i<l;i++){
		if(rmap[L[i]]){
			int mn = min(lmap[L[i]], rmap[L[i]]);
			lmap[L[i]] -= mn;
			rmap[L[i]] -= mn;
		}
	}
	int valChange = 0;
	if(l < r){
		for(int i=0;i<r;i++){
			if(rmap[R[i]] > 1){
				if(rmap[R[i]]%2){
					valChange += (rmap[R[i]]-1)/2;
					rmap[R[i]] -= (rmap[R[i]]-1)/2;
				}else{
					valChange += rmap[R[i]]/2;
					rmap[R[i]]=0;
				}
			}
		}
	}else if(l > r){
		for(int i=0;i<l;i++){
			if(lmap[R[i]] > 1){
				if(lmap[R[i]]%2){
					valChange += (lmap[R[i]]-1)/2;
					lmap[R[i]] -= (lmap[R[i]]-1)/2;
				}else{
					valChange += lmap[R[i]]/2;
					lmap[R[i]]=0;
				}
			}
		}
	}
	for(int i=0;i<l;i++){
		if(lmap[L[i]]){
			cout << L[i] << " " <<  lmap[L[i]] << "\n";
		}
	}
	cout << endl;

	for(int i=0;i<r;i++){
		if(rmap[R[i]]){
			cout << R[i] << " " <<  rmap[R[i]] << "\n";
		}
	}
	cout << endl;
	int x = abs(l-r);
	counter += ;
	counter += 
}

int main(){
	quickstart();
	testcase(t){
		solve();
	}
}