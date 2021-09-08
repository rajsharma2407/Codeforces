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
		int x;
		cin>>x;
		int ct2021 = x%2020;
		int ct2020 = (x - ct2021)/2020 - ct2021;

		if(ct2020 >=0 && ct2020*2020 + ct2021*2021 == x){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}
}