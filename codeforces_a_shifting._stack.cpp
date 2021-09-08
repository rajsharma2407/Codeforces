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
		cin>>n;
		bool ok = true;
		ll *arr = new ll[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n;i++){
			 if(arr[i] < i){
			 	ok = false;
			 	break;
			 }
			 if(i<n-1)
			 	arr[i+1] += arr[i]-i;
		}
		if(ok)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}