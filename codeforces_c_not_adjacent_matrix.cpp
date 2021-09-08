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
		int len = 1;
		if(n == 1){
			cout << 1 << endl;
			continue;
		}else if(n == 2){
			cout << -1 << endl;
			continue;
		}
		for(int i=1;i<=n*n;i+=2){
			cout << i;
			if(len%n == 0){
				cout << endl;
			}else{
				cout << " ";
			}
			len++;
		}
		for(int i=2;i<=n*n;i+=2){
			cout << i;
			if(len%n == 0)
				cout << endl;
			else
				cout << " ";
			len++;
		}
	}
}