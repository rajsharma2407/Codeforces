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
	int m, n;
	cin >> n >> m;
	if(m > ceil(n/2)){
		cout << n - m << endl;
	}else{
		if(m == 0)
			m = 1;
		cout << m << endl;	
	}
}