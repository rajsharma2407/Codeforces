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
		if(n%2 == 0){
			for(int i=1;i<=n;i+=2){
				cout << i+1 << " " << i << " ";
			}
			cout << endl;
		}else{
			for(int i=1;i<=n-3;i+=2){
				cout << i+1 << " " << i << " ";
			}
			cout << n << " " << n- 2<< " " << n-1 << endl;
		}
	}
}