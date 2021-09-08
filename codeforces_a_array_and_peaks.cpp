#include<bits/stdc++.h>
#define ll long long
#define mp(a, b) make_pair(a, b)
#define pb(x) push_back(x)
#define testcase(t) ll t; cin>>t; while(t--)
using namespace std;

void quickstart(){
	#ifndef ONLINE_JUDGE
		freopen("F:/c++/input.txt","r",stdin);
		// freopen("F:/c++/output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
}

void solve() {
	int n, k;
	cin >> n >> k;
	int ans = (n-1)/2;	
	int count = 0;
	if(k <= ans){
		cout << "1 ";
		for(int i=2;i<=n;i++){
				if(i%2 == 0){
					if(count < k){
					if(i == n)
						cout << i << " ";
					else
						cout << i+1 << " ";
					}else{
						cout << i << " ";
					}
				}else{
					if(count < k){
						count++;
						cout << i-1 << " ";
					}else{
						cout << i << " ";
					}
				}
		}
				cout << endl;
	}else{
		cout << "-1\n";
	}
}

int main(){
	quickstart();
	testcase(t){
		solve();
	}
}