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
 		int n, a, b;
 		cin >> n >> a >> b;
 		int x = 0;
 		for(int i=0;i<n;i++){
 			if(x >= b){
 				x = 0;
 			}
 			cout << (char)(97+x);
 			x++;
 		}
 		cout << endl;
	}
}