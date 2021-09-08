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
		int a, b;
		cin >> a >> b;
		vector<int> arr;
		int start = abs(a-b)/2;
		if((a+b)%2){
			for(int i=start;i<=(a+b)-start; i++){
				arr.push_back(i);
			}
		}else{
			for(int i=0;i<=min(a, b); i++){
				arr.push_back(start);
				start+=2;
			}
		}
		cout << arr.size() << endl;
		for(int i=0;i<arr.size();i++){
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}