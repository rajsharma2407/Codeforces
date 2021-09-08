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
		int m;
		cin>>n;
		cin>>m;
		int left[m], bottom[n];
		map<int, int> freq;
		int k;
		for(int i=0;i<n;i++){
			cin>>k;
			freq[k]++;
		}
		int count=0;
		for(int i=0;i<m;i++){
			cin>>k;
			if(freq[k]){
				count++;
			}
		}
		cout<<count<<endl;
	}
return 0;
}