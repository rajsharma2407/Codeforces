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
	vector<ll> arr(n)	;
	for(int i=0;i<n;i++)
		cin >> arr[i];
	sort(arr.begin(), arr.end());
	if(arr[n-2] + arr[0] > arr[n-1]){
		cout << "YES\n";
		for(int i=0;i<n;i++)
			cout << arr[i] << " ";
		cout << endl;
	}else if(arr[n-3] + arr[n-2] > arr[n-1]){
		swap(arr[n-1], arr[n-2]);
		cout << "YES\n";
			for(int i=0;i<n;i++)
				cout << arr[i] << " ";
			cout << endl;
	}else{
		cout << "NO\n";
	}
}

int main(){
	quickstart();
		solve();
}
