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
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		for(int i=c;i<=d;i++){
			if(b + c > i){
				cout << b << " " << c << " " << i << endl;
				break;
			}
		}
	}
}