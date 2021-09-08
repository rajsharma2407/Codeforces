#include<bits/stdc++.h>
#define ll long long
#define mp(a, b) make_pair(a, b)
#define pb(x) push_back(x)
#define testcase(t) ll t; cin>>t; while(t--)
using namespace std;

void quickstart(){
	#ifndef ONLINE_JUDGE
		freopen("F:/c++/input.txt","r",stdin);
		freopen("F:/c++/output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
}

void solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0;i<n;i++)	
		cin >> v[i];
	int one = 0;
	int zero = 0;
	for(int i=0;i<n;i++){
		if(v[i] == 0)
			zero++;
		else
			one++;
	}
	bool isEven = true;
	if(one <= zero){
		cout << zero << endl;
		for(int i=0;i<n;i++){
			if(v[i] == 0)
				cout << "0 ";
		}
	}else{
		cout << ((one%2 == 0)? one : one-1 )<< endl;
		if(zero%2 != 0)
			isEven = false;
		for(int i=0;i<n;i++){
			if(!isEven && v[i] == 1){
				isEven=true;
				continue;
			}
			if(v[i] == 1)
				cout << "1 ";
		}
	}
	cout << endl;
}

int main(){
	quickstart();
	testcase(t){
		solve();
	}
}