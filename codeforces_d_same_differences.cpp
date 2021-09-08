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
	testcase(t){
		int n;
		cin >> n;
		int *arr = new int[n];
		map<ll, ll> freq;
		for(int i=0;i<n;i++){
			cin >> arr[i];
			freq[arr[i] - (i+1)]++;
		}
		ll ans = 0;
		for(auto it = freq.begin(); it!=freq.end(); it++){
			ans += (it->second*(it->second - 1))/2;
		}
		cout << ans << endl;
	}
}