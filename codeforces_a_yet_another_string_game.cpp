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
		string str;
		cin>>str;
		for(int i=0;i<str.length();i++){
			if(i%2 == 0){
				if(str[i] != 'a'){
					str[i]='a';
				}else{
					str[i]='b';
				}
			}else{
				if(str[i] != 'z'){
					str[i]='z';
				}else{
					str[i]='y';
				}
			}
		}
		cout<<str<<endl;
	}
}