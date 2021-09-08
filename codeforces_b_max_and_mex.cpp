#include<bits/stdc++.h>
#define ll long long
#define testcase(t) ll t; cin>>t; while(t--)
using namespace std;

void quickstart(){
	#ifndef ONLINE_JUDGE
		freopen("F:/c++/23-01-2021/CodeForces/input.txt","r",stdin);
		freopen("F:/c++/23-01-2021/CodeForces/output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
}

int main(){
	quickstart();
	testcase(t){
		int n, k;
		cin >> n >> k;
		int x;
		map<int, int> mp;
		for(int i=0;i<n;i++){
			cin >> x;
			mp[x] += 1;
		}
		int a=0;
		for(auto i=mp.begin();i!=mp.end();i++){
			if(i->first != a)
				break;
			a++;
		}
		auto it = mp.rbegin();
		int b = it->first;
		if(a < b){
			if(k == 0){
				cout << mp.size() << endl;
				continue;
			}
			ll sum = ceil((double)(a+b)/2);
			mp[sum]++;
			cout << mp.size() << endl;
		}else{
			cout << mp.size() + k << endl;
		}
	}
}