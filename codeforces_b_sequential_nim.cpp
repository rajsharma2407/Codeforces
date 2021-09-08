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
		int turns = 0;
		int *arr = new int[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		int ones = 0;
		int i = 0;
		while(arr[i] == 1 && i<n-1){
			ones += 1;
			i++;
		}
		if(ones%2 == 0){
			cout << "First\n";
		}else{
			cout << "Second\n";
		}
	}
}