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
		int k;
		cin>>n;
		cin>>k;
		string str="";
		for(int i=0;i<k;i++){
			str += 'a';
		}
		int var=2;
		for(int i=k;i<n;i++){
			if(str[i-1] != 'b' && str[i-2] != 'b'){
				str+='b';
			}else if(str[i-1] != 'a' && str[i-2] != 'a'){
				str+='a';
			}
			else if(str[i-1] != 'c' && str[i-2] != 'c'){
				str+='c';
			}
		}
		cout<<str<<endl;
	}
return 0;
}