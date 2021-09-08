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
		int n;
		cin >> n;
		vector<int> v;
		int x;
		for(int i=0;i<n;i++){
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		bool ans = false;
		for(int i=0;i<n-1;i++){
			if(v[i] == v[i+1]){
				ans = true;
				break;
			}
		}
		cout << (ans ? "YES\n" : "NO\n");
	}
}