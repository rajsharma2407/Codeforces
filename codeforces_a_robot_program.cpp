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
		int x, y;
		cin>>x>>y;
		int ma = max(x,y);
		int mi = min(x,y);
		y=mi*2;
		x = ma - mi;
		if(x != 0){
			
		x*=2;
		x--;
		}
		cout<<x+y<<endl;
	}
}