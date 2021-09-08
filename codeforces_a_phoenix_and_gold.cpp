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
	int n, x;
	cin >> n >> x;
	vector<int> arr(n);
	ll sum = 0;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> arr[i];
		sum += arr[i];
	}

	if(sum == x){
		cout << "NO\n";
	}else{
		cout << "YES\n";
		sum=0;
		for(int i=0;i<n;i++){
			if(sum+arr[i] == x){
				swap(arr[i], arr[i+1]);
			}
				sum+=arr[i];
				cout << arr[i] << " ";
		}
		cout << endl;
	}
}

int main(){
	quickstart();
	testcase(t){
		solve();
	}
}