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
		int c1, c2, c3;
		cin>>c1>>c2>>c3;
		long long int arr[5];
		for(int i=0;i<5;i++){
			cin>>arr[i];
		}
		c1-=arr[0];
		c2-=arr[1];
		c3-=arr[2];
		if(c1>-1 && c2>-1 && c3>-1){

		if(arr[3] > 0){
			if(arr[3]>c1){
				arr[3]-=c1;
				c1=0;
			}else{
				c1-=arr[3];
				arr[3]=0;
			}
		}


		if(arr[4] > 0){
			if(arr[4]>c2){
				arr[4]-=c2;
				c2=0;
			}else{
				c2-=arr[4];
				arr[4]=0;
			}
		}

		if(arr[3]+arr[4] == 0 || arr[3]+arr[4]<=c3){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
		}else{
			cout<<"NO\n";
		}
	}
	return 0;
}