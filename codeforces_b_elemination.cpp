#include<bits/stdc++.h>
using namespace std;

void quickStart(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
}	

int main(){
	quickStart();
	int t;
	cin>>t;
	while(t--){
		int a;
		int b;
		int c;
		int d;
		cin>>a;
		cin>>b;
		cin>>c;
		cin>>d;
		int x = max(a+b,c+d);
		cout<<x<<endl;
	}
	return 0;
}