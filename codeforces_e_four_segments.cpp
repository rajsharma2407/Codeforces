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
		int a, b, c, d, arr[4];
		for(int i=0;i<4;i++){
			cin>>arr[i];
		}
		for(int i=0;i<4;i++){
			for(int j=i+1;j<4;j++){
				if(arr[j]<arr[i]){
					a=arr[i];
					arr[i]=arr[j];
					arr[j]=a;
				}
			}
		}
		cout<<arr[0]*arr[2]<<endl;
	}
	return 0;
}