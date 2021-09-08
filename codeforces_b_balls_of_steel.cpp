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
		int n, k;
		cin >> n >> k;
		int *x = new int[n];
		int *y = new int[n];
		for(int i=0;i<n;i++){
			cin >> x[i];
			cin >> y[i];
		}
		bool possible = true;
		for(int i=0;i<n;i++){
			possible = true;
			for(int j=0;j<n;j++){
				if((abs(x[i] - x[j]) + abs(y[i]-y[j])) > k){
					possible = false;
					break;
				}
			}
			if(possible){
				break;
			}
		}
		if(possible){
			cout << "1\n";
		}else{
			cout << "-1\n";
		}
	}
}