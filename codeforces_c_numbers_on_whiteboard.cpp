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
	for(int i=0;i<n;i++)
		arr[i]=i+1;
	cout << 2 << endl;
	if(n == 2){
		cout << 1 << " " << 2 << endl;
		continue;
	}
	for(int i=n-1;i>0;i--){
		if(arr[i]%2 == arr[i-1]%2){
			cout << arr[i] << " " << arr[i-1]<<endl;
			arr[i-1] = (arr[i]+arr[i-1])/2;
		}else{
			cout << arr[i] << " " << arr[i-2] << endl;
			arr[i-2] = (arr[i]+arr[i-2])/2;
		}
	}
	}
}