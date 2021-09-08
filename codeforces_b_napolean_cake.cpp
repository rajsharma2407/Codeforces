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
	int n;
	cin >> n;
	vector<int> layers(n);
	vector<int> ans(n);
	for(int i=0;i<n;i++)
		cin >> layers[i];
	int x = 0;
	for(int i=n-1;i>=0;i--){
		x = max(x, layers[i]);
		if(x){
			x--;
			ans[i]=1;
		}else{
			ans[i]=0;
		}
	}
	for(int i=0;i<n;i++)
		cout << ans[i] << " ";
	cout << '\n';
}

int main(){
	quickstart();
	testcase(t){
		solve();
	}
}