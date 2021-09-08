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
	vector<string> s1(n);
	map<int, int> mp;
	for(int i=0; i<n; i++){
		cin >> s1[i];
		mp[i] = 1;
	}
	vector<string> left;
	vector<string> right;
	vector<string> middle;
	bool ok = false;
	for(int i=0;i<n;i++){
		ok=false;
		reverse(s1[i].begin(), s1[i].end());
		if(mp[i]){
			for(int j=i+1;j<n;j++){
				if(mp[j]){
					if(s1[i] == s1[j]){
						mp[i] = mp[j] = 0;
						left.push_back(s1[i]);
						right.push_back(s1[j]);
						ok=true;
						break;
					}
				}
			}
		}
		if(!ok && mp[i]){
			string str = s1[i];
			reverse(s1[i].begin(), s1[i].end());
			if(str == s1[i]){
				middle.push_back(str);
			}
		}
	}
	cout << (left.size()+right.size()+(middle.size()?1:0))*m << endl;
	for(int i=0;i<left.size();i++){
		cout << left[i];
	}
	if(middle.size())
		cout << middle[0];
	for(int i=right.size()-1;i>-1;i--){
		reverse(right[i].begin(), right[i].end());
		cout << right[i];
	}
	cout << endl;
}

int main(){
	quickstart();
	solve();
}