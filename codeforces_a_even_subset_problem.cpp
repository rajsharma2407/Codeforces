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
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
		if(n >= 2){
			if(arr[0]%2 == 0){
				cout << "1\n1\n";
			}else if(arr[1]%2 == 0){
				cout << "1\n2\n";
			}else{
				cout << "2\n1 2\n";
			}
		}else{
			if(arr[0]%2 == 0){
				cout << "1\n1\n";
			}else{
				cout << "-1\n";
			}
		}
	}
}