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
		int *arr = new int[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int x=0;
		float brr[10000];
		setprecision(1);
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				brr[x]=(arr[j]-arr[i]);
				brr[x]/=2;
				x++;
			}
		}
		int flag=0;
		int count=0;
		for(int i=0;i<x;i++){
			flag=0;
			for(int j=i+1;j<x;j++){
				if(brr[i] == brr[j]){
					flag=1;
					break;
				}
			}
			if(flag == 0)
			count++;
		}
		cout<<count<<endl;
	}
}
