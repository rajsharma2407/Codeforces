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

int main(){
	quickstart();
	int n, q;
	string str;
	cin >> n >> q >> str;

	int *ans = new int[n+1]();
	int ele = 1;
	for(int i=0; i<n; i++){
		ans[i+1] = ans[i] + (str[i]-'a'+1);
	}
	int l, r;
	while(q--){
		cin >> l >> r;
		cout << ans[r] - ans[l-1] << endl;
	}
}