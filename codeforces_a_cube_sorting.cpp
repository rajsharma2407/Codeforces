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
	int count = 0;
	for(int i=0;i<n;i++){
		cin >> arr[i];
		if( i!=0 &&arr[i] >= arr[i-1]){
			count++;
		}
	}
	if(count){
		cout << "YES\n";
	}else{
		cout << "NO\n";
	}
	}
}