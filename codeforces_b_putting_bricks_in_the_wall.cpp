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
	char arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> arr[i][j];
		}
	}
	int a1 = arr[0][1], a2 = arr[1][0];
	int b1 = arr[n-1][n-2], b2 = arr[n-2][n-1];
	if(a1 == a2){
		if(b1 == b2){
			if(a1 == b1){
				cout << 2 << endl;
				cout << "1 2\n2 1\n" ;
			}else{
				cout << 0 << endl;
			}
		}else if(a1 == b1){
			cout << 1 << endl;
			cout << n << " " <<n-1 << endl;
		}else{
			cout << 1 << endl;
			cout << n-1 << " " << n << endl;
		}
	}else{
		if(b1 == b2){
			if(a1 == b1){
				cout << 1 << endl;
				cout << "1 2\n";
			}else{
				cout << 1 << endl;
				cout << "2 1\n";
			}
		}else{
			if(a1 == b1){
				cout << 2 << endl;
				cout << "1 2\n";
				cout << n-1 << " " << n << endl;
			}else if(a1 == b2){
				cout << 2 << endl;
				cout << "1 2\n";
				cout << n << " " << n-1 << endl;
			}else{
				cout << 0 << endl;
			}
		}
	}

}

int main(){
	quickstart();
	testcase(t){
		solve();
	}
}