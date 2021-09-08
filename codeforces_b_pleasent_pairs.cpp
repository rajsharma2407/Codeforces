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
	testcase(t){
		int n;
		cin >> n;
		int x;
		vector<pair<int, int>> vp;
		for(int i=0;i<n;i++){
			cin >> x;
			vp.push_back(make_pair(x, i+1));
		}
		sort(vp.begin(), vp.end(), comp);
		int ans = 0;
		for(int i=0;i<n-1;i++){
			int x1 = vp[i].first;
			int y1 = vp[i].second;
			int x2 = vp[i+1].first;
			int y2 = vp[i+1].second;
			if(x1*x2 > n*2-1){
				break;
			}
			for(int j=i+1;j<n;j++){
				x2 = vp[j].first;
				y2 = vp[j].second;
				if(x2*x1 > 2*n-1){
					break;
				}else if(x2*x1 == y1+y2){
					ans++;
				}
			}
		}
		cout << ans << endl;
	}
}