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
		string str;
		cin>>n;
		cin>>str;
		if(str[0] == '2' && str[1] == '0' && str[2] == '2' && str[3] == '0'){
			cout<<"YES\n";
		}else if(str[n-4] == '2' && str[n-3] == '0' && str[n-2] == '2' && str[n-1] == '0'){
			cout<<"YES\n";
		}else if(str[0] == '2' && str[n-3] == '0' && str[n-2] == '2' && str[n-1] == '0'){
			cout<<"YES\n";
		}else if(str[0] == '2' && str[1] == '0' && str[n-2] == '2' && str[n-1] == '0'){
			cout<<"YES\n";
		}else if(str[0] == '2' && str[1] == '0' && str[2] == '2' && str[n-1] == '0'){
			cout<<"YES\n";
		}else if(str[0] == '2' && str[n-3] == '0' && str[n-2] == '2' && str[n-1] == '0'){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}
}
