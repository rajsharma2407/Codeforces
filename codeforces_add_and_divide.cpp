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

int minPower(ll x, ll y){
	int d = 1;
	ll b = y;
	while(x>=b){
		b*=y;
		d++;
	}
	return d;
}

int main(){
	quickstart();
	testcase(t){
		ll int x, y;	
		cin>>x>>y;
		int count=0;
		if(y == 1)
		{
			y++;
			count++;
		}
		int z = minPower(x,y);
		int prv = INT_MAX;
		z+=count;
		while(z<=prv){
			prv=z;
			y++;
			count++;
			z = minPower(x,y);
			z+=count;
		}
		cout<<prv<<endl;	
	}
}