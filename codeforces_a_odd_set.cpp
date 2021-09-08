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
		int x = n*2;
		vector<int> arr(x);
		for(int i=0;i<x;i++){
			cin >> arr[i];
		}
		int ctEven = 0, ctOdd=0;
		for(int i=0;i<x;i++){
			if(arr[i]%2){
				ctOdd++;
			}else{
				ctEven++;
			}
		}
		if(ctEven == ctOdd && n == ctEven){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
}