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
		int m;
		int n;
		cin>>n>>m;
		int *a = new int[n];
		int *b = new int[n];
		int x = 0;
		int y = 0;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];
		for(int i=0;i<n;i++){
			if(b[i] == 1 && x <m){
				y+=1;
				x+=a[i];
			}
			}
		if(x < m){

		for(int i=0;i<n;i++){
			if(x>=m)
				break;
			if(b[i] == 2 && x <m){
				y+=2;
				x+=a[i];
			}
			}
		}
		if(x>=m){
			cout<<y<<endl;
		}else{
			cout<<-1<<endl;
		}

		}
}