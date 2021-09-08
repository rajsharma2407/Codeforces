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
	vector<vector<int>> v1(n,vector<int>(m));
	vector<vector<int>> v2(m,vector<int>(n));
	int index = -1;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> v1[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin >> v2[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(v1[i][0] == v2[j][0]){
				index = j;
				break;
			}
		}
		if(index != -1)
			break;
	}
	map<int, int> pos;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(v2[index][i] == v1[j][0]){
				pos[v2[index][i]] = j;
				break;
			}
		}
	}

	for(int j=0;j<n;j++){
		int k = pos[v2[index][j]];
		for(int i=0;i<m;i++){
			cout << v1[k][i] << " ";
		}
		cout << endl;
	}
}

int main(){
	quickstart();
	testcase(t){
		solve();
	}
}