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
	int n;
	cin >> n;
	int *arr = new int[n];
	ll sum = 0;
	for(int i=0;i<n;i++){
		cin >> arr[i];
		sum += arr[i];
	}
	sort(arr, arr+n);
	ll sum1=0;
	int ans=0;
	for(int i=n-1;i>=0;i--){
		if(sum-sum1 >= 0){
			sum -= arr[i];
			sum1 +=arr[i];
			ans +=1;
		}else
			break;
	}
	cout << ans << endl;
}