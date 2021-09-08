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
		int val = 0;
		long long ans = 0;
		for(int i=0;i<n;i++){
			if(arr[i] > 0){
				val = arr[i];
				break;
			}else{
				ans++;
			}
		}
		if(val>0)
			ans++;
		int i=0;
		while(val>0 && i<n-1 && arr[i]<=0){
			if(abs(arr[i]-arr[i+1]) < val){
				ans--;
				break;
			}
			i++;
		}
		if(ans>n)
			ans = n;
		cout << ans << endl;
	}
}