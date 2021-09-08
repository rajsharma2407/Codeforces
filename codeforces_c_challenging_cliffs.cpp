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
		for(int i=0;i<n;i++)
			cin >> arr[i];
		sort(arr.begin(), arr.end());
		if(n == 2){
			cout << arr[0] << " " << arr[1] << endl;
			continue;
		}
		int mn = INT_MAX;
		int x, y;
		for(int i=n-1;i>0;i--){
			if(arr[i] - arr[i-1] < mn){
				x = i-1;
				y = i;
				mn = arr[i] - arr[i-1];
			}
		}
		for(int i=y; i<n; i++)
			cout << arr[i] << " ";
		for(int i=0; i<=x; i++)
			cout << arr[i] << " ";
		cout << endl;

	}
}