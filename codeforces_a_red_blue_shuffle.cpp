#include<bits/stdc++.h>
using namespace std;

void quickstart(){
	ios_base::sync_with_stdio(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

int main(){
	quickstart();
	int t;
	cin>>t;
	while(t--){
		int n, countb=0, countr=0;
		cin>>n;
		string strb, strr;
		cin>>strr>>strb;
		for(int i=0;i<n;i++){
			if(strb[i]>strr[i]){
				countb++;
			}else if(strb[i]<strr[i]){
				countr++;
			}else{
				continue;
			}
		}
		if(countr>countb){
			cout<<"RED\n";
		}else if(countb>countr){
			cout<<"BLUE\n";
		}else{
			cout<<"EQUAL\n";
		}
	}
}