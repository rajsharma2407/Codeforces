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
		int a, b, n;
		cin >> a >> b >> n;
		int op = 0;
		while(a <= n && b <= n){
			op++;
			if(a < b) a+=b;
			else b+=a;
		}
		cout << op << endl;
	}
}