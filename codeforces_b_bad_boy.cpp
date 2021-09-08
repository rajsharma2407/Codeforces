#include<bits/stdc++.h>
#define ll long long
#define testcase(t) ll t; cin>>t; while(t--)
using namespace std;

void quickstart(){
	#ifndef ONLINE_JUDGE
		freopen("F:/c++/input.txt","r",stdin);
		freopen("F:/c++/output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
}

int main(){
	quickstart();
	testcase(t){
		ll n, m, i, j;
		cin >> n >> m >> i >> j;
		// distance from (1, 1)
		ll d1 = i-1 + j-1;
		// distance from (1, m)
		ll d2 = i-1 + m - j;
		// distance from (n, 1)
		ll d3 = n-i + m - 1;
		// distance from (n, n)
		ll d4 = n-i + m - j;

		ll mx = max({d1, d2, d3, d4});

		if(mx == d1 || mx == d4){
			cout << "1 1 "<< n << " " << m << endl;
		}else{
			cout << n << " 1 1 " << m << endl;
		}
	}
}