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
		int n, d, in, lar=1000, seclar=0, flag=0;
		cin>>n>>d;
		for(int i=0;i<n;i++){
			cin>>in;
			if(in>d) flag =1;
			if(in<lar){
				seclar=lar;
				lar=in;
			}else if(in>=lar && in<=seclar){
				seclar=in;
			}
		}
		if(flag == 0 || lar+seclar<=d){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}