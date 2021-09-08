#include<bits/stdc++.h>
using namespace std;

void faststart(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		ios_base::sync_with_stdio(0);
}

int main(){
	faststart();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n], count=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n;i++){
			if(arr[i-1] == arr[i] && arr[i] != arr[i+1]){
				arr[i]++;
			}
			if( arr[i-1]!= arr[i]){
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}