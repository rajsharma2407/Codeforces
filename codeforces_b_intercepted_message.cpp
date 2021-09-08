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
	int n, m;
	cin >> n >> m;
	vector<int> v1(n);
	vector<int> v2(m);
	for(int i=0;i<n;i++)	
		cin >> v1[i];

	for(int i=0;i<m;i++)	
		cin >> v2[i];

	for(int i=1;i<n;i++)
		v1[i] += v1[i-1];
	for(int i=1;i<m;i++)
		v2[i] += v2[i-1];
	
	int count=0;
	for(int i=0;i<n;i++){
		if(binary_search(v2.begin(), v2.end(), v1[i]))
			count += 1;
	}
	cout << count << endl;
}

int main(){
	quickstart();
		solve();
}