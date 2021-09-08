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
		int *x = new int[n];
		int *y = new int[n]();
		for(int i=0;i<n;i++)
			cin >> x[i];
		for(int i=1;i<n;i++){
			int a = x[i-1];
			int b = y[i-1];
			int c = x[i];
			int d = a^b;
			x[i] = a|c;
			y[i] = x[i]^c;
		}
		for(int i=0;i<n;i++)
			cout << y[i] << " ";
		cout << endl;
	}
}