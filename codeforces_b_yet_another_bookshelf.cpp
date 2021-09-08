#include<bits/stdc++.h>
#define ll long long
#define testcase(t) ll t; cin>>t; while(t--)
using namespace std;

void quickstart(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
}

int main(){
	quickstart();
	testcase(t){
	int n;
	cin >> n;
	int *arr = new int[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int c = 0;
	int count = 0;
	int ans = 0;
	for(int i=0;i<n;i++){
		if(c>0 && arr[i] == 0){
			count += 1;
		}
		if(count > 0 && arr[i] == 1){
			ans += count;
			count=0;
		}
		if(arr[i] == 1)
			c++;
	}
	cout << ans << endl;
	}
}