#include<bits/stdc++.h>
#define ll long long
#define f first
#define s second
#define testcase(t) ll t; cin>>t; while(t--)
using namespace std;

void quickstart(){
	#ifndef ONLINE_JUDGE
		freopen("F:/c++/input.txt","r",stdin);
		freopen("F:/c++/output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
}

bool comp(pair<int, pair<int, int>> x, pair<int, pair<int, int>> y){
	if(x.s.f < y.s.f){
		return true;
	}else if(x.s.f > y.s.f){
		return false;
	}else{
		if(x.s.s < y.s.s){
			return true;
		}else{
			return false;
		}
	}
}

int main(){
	quickstart();
	testcase(t){
		int n;
		cin >> n;
		vector<vector<int>> arr(n);
		int x, val;
		for(int i=0;i<n;i++){
			cin >> x;
			for(int j=0;j<x;j++){
				cin >> val;
				arr[i].push_back(val);
			}
		}
		vector<pair<int, pair<int, int>>> ans(n);
		int put, get, pos;
		for(int i=0;i<n;i++){
			put = arr[i][0]+1;
			get = arr[i][0]+1;
			pos = 0;
			for(int j=0;j<arr[i].size();j++){
				if(arr[i][j] > put){
					put = get = arr[i][j]+1;
					pos=j;
				}else{
					get++;
				}
			}
				ans[i] = make_pair(pos, make_pair(put, get));
		}
		sort(ans.begin(), ans.end(), comp);
		put = 0;
		for(int i=0;i<n-1;i++){
			if(ans[i+1].s.f <= ans[put].s.s+ans[i+1].s.f){
				// put = ans[i].s.s;
			}else{
				put = i+1;
			}
		}
		cout << put << " ";
		cout << ans[put].s.f << endl;
	}
	return 0;
}