#include<bits/stdc++.h>
using namespace std;

void fastRun(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		ios_base::sync_with_stdio(0);

}
int main(){
	fastRun();
	int t;
	cin>>t;
	while(t--){
		int n;
		string b, temp="";
		cin>>n;
		cin>>b;
		// cout<<"b "<<b<<endl;
		for(int i=0;i<n;i++){
			if(i == 0){
				if(b[i] == '0'){
					b[i]='1';
				}else{
					b[i]='2';
				}
				temp=temp+'1';
			}else{
				if(b[i-1] == '0' && b[i] == '1'){
					temp=temp+'1';
					b[i]='2';
				}else if(b[i-1] == '0' && b[i] == '0'){
					temp=temp+'1';
					b[i]='1';
				}else if(b[i-1] == '1' && b[i] == '0'){
					temp=temp+'0';
				}else if(b[i-1] == '1' && b[i] == '1'){
					b[i]='2';
					temp=temp+'1';
				}else if(b[i-1] == '2' && b[i] == '0'){
					temp=temp+'1';
					b[i]='1';
				}else if(b[i-1] == '2' && b[i] == '1'){
					temp=temp+'0';
				}
			}
		}
		cout<<temp<<endl;
	}
	return 0;
}