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
	int n;
	cin >> n;
	n++;
	int a = n%10;
	int b = (n/10)%10;
	int c = (n/100)%10;
	int d = (n/1000)%10;
	while(a == b || a == c || a == d || b == c || b == d || c == d){
		n++;
		a = n%10;
		b = (n/10)%10;
		c = (n/100)%10;
		d = (n/1000)%10;
	}
	cout << n << endl;
	return 0;
}