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

bool comp1(pair<int, pair<int, int>> x, pair<int, pair<int, int>> y){
	return x.first > y.first;
}

bool comp2 (pair<int, pair<int, int>> x,pair<int, pair<int, int>> y){
	return x.second.first < y.second.first;
}

void solve() {
	int n, m, x;
	cin >> n >> m >> x;
	vector<pair<int, pair<int, int>>> v;
	int in;
	for(int i=0;i<n;i++){
		cin >> in;
		v.push_back(mp(in, mp(i, 0)));
	}
	sort(v.begin(), v.end(), comp1);
	int j=1;
	for(int i=0;i<n;i++){
		v[i].second.second = j;
		if(j == m)
			j=1;
		j++;
	}
	sort(v.begin(), v.end(), comp2);
	cout << "YES\n";
	for(int i=0;i<n;i++){
		cout << v[i].second.second << " ";
	}
	cout << endl;
}

int main(){
	quickstart();
	testcase(t){
		solve();
	}
}