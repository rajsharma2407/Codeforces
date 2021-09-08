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
		int n, m;
		cin >> n >> m;
		int x;
		int sum = 0;
		for(int i=0;i<n;i++){
			cin>>x;
			sum += x;
		}
		if(sum == m)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}