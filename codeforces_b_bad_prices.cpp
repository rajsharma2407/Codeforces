#include<bits/stdc++.h>
#define ll long long
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
	testcase(t){
	int n;
	cin >> n;
	int *arr = new int[n];
	int rmin = INT_MAX;
	int ans = 0;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	for(int i=n-1;i>=0;i--){
		if(arr[i] > rmin)
			ans += 1;
		rmin = min(rmin, arr[i]);
	}
	cout << ans << endl;
	}
}