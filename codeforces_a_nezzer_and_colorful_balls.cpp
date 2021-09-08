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
		string str;
		cin>>n;
		map<int, int> freq;
		int *a = new int[n];
		int max=1;
		for(int i=0;i<n;i++){
			cin>>a[i];
			freq[a[i]]++;
			if(freq[a[i]]>max)
				max=freq[a[i]];
		}
		cout<<max<<endl;
	}
}
