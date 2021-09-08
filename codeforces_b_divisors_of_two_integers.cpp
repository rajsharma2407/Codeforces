#include<bits/stdc++.h>
#include<numeric>
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
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	int no1 = arr[n-1];
	int no2 = 1;
	bool found = false;
	for(int i=n-1;i>=0;i--){
		if(no1%arr[i] != 0){
			found=true;
			no2 = arr[i] ;
			break;
		}
	}
	if(found){
		cout << no1 << " " << no2 << endl;
	}else{
		for(int i=n-1;i>0;i--){
			if(arr[i] == arr[i-1]){
				no2 = arr[i];
				break;
			}
		}
		cout << no1 << " " << no2 << endl;
	}
}

int main(){
	quickstart();
		solve();
}