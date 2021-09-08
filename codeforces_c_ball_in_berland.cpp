#include<bits/stdc++.h>
using namespace std;

void quickstart(){
	#ifndef ONLINE_JUDGE
		freopen("F://c++/input.txt","r",stdin);
		freopen("F://c++/output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
}

int main(){
	quickstart();
	int t;
	cin>>t;
	while(t--){
		int b;
		int g;
		int k;
		cin>>b;
		cin>>g;
		cin>>k;
		int boy[k];	
		int girl[k];
		for(int i=0;i<k;i++){
			cin>>boy[i];
		}
		for(int i=0;i<k;i++){
			cin>>girl[i];
		}
		int count=0;
		for(int i=0;i<k;i++){
			for(int j=i+1;j<k;j++){
				if((boy[i] != boy[j]) && (girl[i] != girl[j])){
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
}