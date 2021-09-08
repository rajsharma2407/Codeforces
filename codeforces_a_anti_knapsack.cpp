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
		int n, k;
		cin >> n >> k;
		int x;
		x = ceil((float)k/2);
		cout << n-x << endl;
		for(int i=n;i>=x;i--){
			if(i == k)
				continue;
			cout << i << " ";
		}
		if(n-x != 0)
		cout << endl;
	}
}