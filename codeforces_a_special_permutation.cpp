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
		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			if(i == n){
				cout<<1<<" ";
			}else{
				cout<<i+1<<" ";
			}
		}
		cout<<endl;
	}
}