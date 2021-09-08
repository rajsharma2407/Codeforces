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
		int *arr = new int[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		bool check = false;
		int i=0;
		for(i=n-2;i>=0;i--){
			if(!check && arr[i+1] > arr[i]){
				check = true;
			}
			if(check && arr[i+1] < arr[i]){
				break;
			}
		}
		cout << i+1 << endl;
	}
	return 0;
}