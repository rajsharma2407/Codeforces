#include<bits/stdc++.h>
#define ll long long
#define testcase(t) ll t; cin>>t; while(t--)
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
	testcase(t){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int count=0;
		for(int i=0;i<n-1;i++){
			int Mx = max(arr[i],arr[i+1]);
			int Mm = min(arr[i],arr[i+1]);
			double val = (double)Mx/Mm;
			while((val) > 2){
				Mm*=2;
				val=(double)Mx/Mm;
				count++;
			}
		}
		cout<<count<<endl;
	}
}