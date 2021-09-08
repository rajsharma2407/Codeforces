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
	vector<string> v1;
	vector<string> v2;
	string x;
	map<string, int> mp;
	int count = 0;
	for(int i=0;i<n;i++)	{
		cin >> x;
		mp[x]++;
		v1.pb(x);
	}
	for(int j=0;j<m;j++){
		cin >> x;
		mp[x]++;
		v2.pb(x);
		if(mp[x] == 2)
			count++;
	}
	int z = count/2;
	if(v1.size() + (count-z) > v2.size() + z){
		cout << "YES\n";
	}else{
		cout << "NO\n";
	}
}

int main(){
	quickstart();
	solve();
}