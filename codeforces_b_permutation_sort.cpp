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

		vector<int> temp(arr);
		sort(temp.begin(), temp.end());
		bool sorted = true;
		for(int i=0;i<n;i++){
			if(temp[i] != arr[i]){
				sorted = false;
				break;
			}
		}
		if(sorted){
			cout << "0\n";
		}else{
			if(arr[0] == 1 || arr[n-1] == n){
				cout << "1\n";
			}else if(arr[0] == n && arr[n-1] == 1){
				cout << "3\n";
			}else{
				cout << "2\n";
			}
		}
	}
}