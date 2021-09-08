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
		cin>>n>>k;
		int s=1;
		if(n<k) s=ceil((float) k/n);
		if(n>k && n%k!=0) s++;
		cout << s << endl;
	}
}