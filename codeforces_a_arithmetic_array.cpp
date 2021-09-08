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
		cin  >> n;
		vector<int> arr(n);
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		int sum = 0;
		for(int i=0;i<n;i++)
			sum += arr[i];
		if(sum/n < 1){
			cout << "1\n";
		}else{
			cout << sum-n << endl;
		}
	}
}