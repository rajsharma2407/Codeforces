#include<bits/stdc++.h>
#define ll long long
using namespace std;

void quickStart(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
}	

int main(){
	quickStart();
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		ll *arr = new ll[n*k];
		for(int i=0;i<n*k;i++){
			cin>>arr[i];
		}
		ll x = (n*k) - n/2 - 1;
		ll sum = 0;
		while(k){
			sum += arr[x];
			x -= n/2 + 1;
			k--;
		}
		cout << sum << endl;
	}

	return 0;
}