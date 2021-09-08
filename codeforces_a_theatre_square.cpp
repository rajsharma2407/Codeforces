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
	ll int n, m, a;
	cin >> n >> m >> a;
	if(n%a != 0)
		n += a - n%a;
	if(m%a != 0)
		m+= a - m%a;
	ll int z = (n*m)/(a*a);
	if(z < 1)
		cout << 1 << endl;
	else 
		cout << (n*m)/(a*a) << endl;
}