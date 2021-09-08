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
		int n;
		cin>>n;
		string str;
		cin>>str;
		for(int i=0;i<n;i++){
			if(str[i] == 'b'){
				cout<<str[i];
			}
		}
		for(int i=0;i<n;i++){
			if(str[i] != 'b'){
				cout<<str[i];
			}
		}
		cout<<endl;
	}
return 0;
}