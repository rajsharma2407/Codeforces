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
		long long int n;
		cin>>n;
		int *arr = new int[n];

		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		if(n>1)
		{
		for(int i=0;i<n/2;i++){
			cout<<arr[i]<<" "<<arr[n-1-i]<<" ";
		}
		if(n%2 != 0)
		cout<<arr[n/2];
		}else{
			cout<<arr[0];
		}
		cout<<endl;
	}
	return 0;
}