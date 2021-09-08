#include<bits/stdc++.h>
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
	int t;
	cin>>t;
	while(t--){
		long long int x;
		cin>>x;
		if(x && !(x&(x-1))){
			cout<<"NO\n";
		}else{
			cout<<"YES\n";
		}
	}
}