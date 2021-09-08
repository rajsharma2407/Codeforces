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
		int n;
		cin>>n;
		long long int *arr = new long long int[n];
		map<int, int> freq;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			freq[arr[i]]++;
		}
		// map<int, int>::iterator it;
		sort(arr, arr+n);
		long long int temp = arr[0]*freq[arr[0]];
		for(int i=0;i<n;i++){
			if(arr[i]*(n-i)>temp)
				temp=arr[i]*(n-i);
		}
		cout<<temp<<endl;
	}
return 0;
}