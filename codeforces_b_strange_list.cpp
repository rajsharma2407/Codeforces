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
		ll n, k;
		cin >> n >> k;
		int *arr = new int[n];
		unsigned ll sum = 0;
		for(int i=0;i<n;i++) {
			cin >> arr[i];
			sum += arr[i];
		}
		ll count = 0;
		ll i=0;
		ll x = k;
		while(arr[i]%k == 0){
			sum += arr[i];
			i++;
			if(i == n){
				i=0;
				k*=x;
			}
		}
		cout << sum << endl;
	}
}