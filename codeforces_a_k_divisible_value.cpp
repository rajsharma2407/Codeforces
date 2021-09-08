#include<bits/stdc++.h>
#define ll long long
#define all(v) v.begin(), v.end()
#define testcase(t) ll t; cin>>t; while(t--)
using namespace std;

void quickstart(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
}

int main(){
	quickstart();
	int n, q;
	cin>>n>>q;
	map<int, int> mp;
	vector<int> v;
	int a;
	for(int i=0;i<n;i++){
		cin>>a;
		v.push_back(a);
		mp[a]++;
	}
	int x, k;
	while(q--){
		cin>>x>>k;
		if(x == 1){
			if(v[k-1] == 0){
				v[k-1]=1;
				mp[1]++;
				mp[0]--;
			}else{
				v[k-1]=0;
				mp[1]--;
				mp[0]++;
			}
		}else{
			if(k <= mp[1]){
				cout << 1 <<endl;
			}else{
				cout << 0 << endl;
			}
		}
	}
}