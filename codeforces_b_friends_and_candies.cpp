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
		ll val = 0;
		for(int i=0;i<n;i++)
			cin >> arr[i];
		ll ans = 0;
		for(int i=0;i<n;i++){
			ans += arr[i];
		}
		if(ans%n != 0){
			cout << "-1\n";
		}else{
			ans /= n;
			for(int i=0;i<n;i++){
				if(arr[i] > ans){
					val++;
				}
			}
			cout << val << endl;
		}
	}
}