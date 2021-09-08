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
		int n;
		cin>>n;
		int count=0;
		while(n>1){
			if(n%2 == 0 && n != 2){
				n/=(n/2);
				count++;
			}else{
				n--;
				count++;
			}
		}
		cout << count << endl;
	}
}