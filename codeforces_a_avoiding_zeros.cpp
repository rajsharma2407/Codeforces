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
		cin >> arr[i];
	int sum=0;
	for(int i=0;i<n;i++)
		sum += arr[i];
	if(sum == 0)
		cout << "NO\n";
	else{
		cout << "YES\n";
		if(sum > 0){
			sort(arr, arr+n, greater<int>());
			for(int i=0;i<n;i++){
				cout << arr[i]<< " ";
			}
			cout << endl;
		}else{
			sort(arr, arr+n);
			for(int i=0;i<n;i++)
				cout << arr[i] << " ";
			cout << endl;
		}
	}
	}
}