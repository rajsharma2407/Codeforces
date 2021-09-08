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
		int *arr = new int[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		sort(arr, arr+n);
		if(k == 0)
			cout << arr[n-1] - arr[0] << endl;
		else{
			ll sum = arr[n-1];
			for(int i=1;i<=k;i++){
				sum += arr[n-i-1];
			}
			cout << sum << endl;
		}
	}
}