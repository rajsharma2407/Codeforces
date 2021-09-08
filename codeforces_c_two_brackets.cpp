#include<bits/stdc++.h>
using namespace std;

void quickstart(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt","r",stdin);
	// 	freopen("output.txt","w",stdout);
	// #endif
	ios_base::sync_with_stdio(0);
}

int main(){
	quickstart();
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int x=0;
		int y=0;
		int countx=0, county=0;
		int j=0;
		int k=0;
		for(int i=0;i<str.length();i++){
			if(str[i] == '['){
				while(j < str.length()){
					if(str[j] == ']' && j>i){
						countx++;
						j++;
						break;
					}
					j++;
				}
			}else if(str[i] == '('){
				while(k < str.length()){
					if(str[k] == ')' && k>i){
						county++;
						k++;
						break;
					}
					k++;
				}
			}
		}
		cout<<county+countx<<endl;
	}
return 0;
}