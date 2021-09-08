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
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		ll count = abs(x2-x1) + abs(y2-y1);
		if(x1 != x2 && y1 != y2)
			count += 2;
		cout << count << endl;
	}
}