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
		vector<int> arr(n);
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		ll ans = 0;
		if(n == 1){
			cout << arr[0] << endl;
		}else{
			if(arr[0] > arr[1]){
				ans = arr[0]-arr[1];
				arr[0] = arr[1];
			}
			if(arr[n-1] > arr[n-2]){
				ans += arr[n-1]-arr[n-2];
				arr[n-1] = arr[n-2];
			}
			for(int i=1;i<n-1;i++){
				if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
					int x = min(arr[i]-arr[i-1], arr[i]-arr[i+1]);
					ans += x;
					arr[i] -= x;
				}
			}
			ll ans1 = arr[0] + arr[n-1];
			for(int i=1;i<n;i++){
				ans1 += abs(arr[i]-arr[i-1]);
			}
				cout << ans + ans1<< endl;
		}
	}
}