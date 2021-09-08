#include<bits/stdc++.h>
#define ll long long
#define testcase(t) ll t; cin>>t; while(t--)
using namespace std;

void quickstart(){
	#ifndef ONLINE_JUDGE
		freopen("F:/c++/input.txt","r",stdin);
		freopen("F:/c++/output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
}

bool comp(pair<int, int> x, pair<int, int> y){
	return x.first < y.first;
}

int main(){
	quickstart();
		int s, n;
		cin >> s >> n;
		vector<pair<int, int>> v;
		int x, y;
		for(int i=0;i<n;i++){
			cin >> x >> y;
			v.push_back({x, y});
		}
		bool win = true;
		sort(v.begin(), v.end(), comp);
		for(int i=0;i<n;i++){
			if(v[i].first < s){
				s += v[i].second;
			}else{
				win=false;
				break;
			}
		}
		if(win)
			cout << "YES";
		else
			cout << "NO";
}