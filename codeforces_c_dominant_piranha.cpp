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
	int mx = -1;
	for(int i=0;i<n;i++){
		cin >> arr[i];
		if(arr[i] > mx)
			mx = arr[i];
	}
	bool equal = true;
	int pos;
	for(int i=0;i<n;i++){
		if(i != n-1 && arr[i] == mx && arr[i+1]<arr[i]){
			equal=false;
			pos=i+1;
			break;
		}
		if(i != 0 && arr[i] == mx && arr[i-1] < mx){
			equal=false;
			pos=i+1;
			break;
		}
	}
	if(equal){
		cout << "-1\n";
	}else{
		cout << pos << endl;
	}
	}
}