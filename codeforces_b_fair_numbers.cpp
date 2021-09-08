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
		ll n;
		cin >> n;
		bool yes;
		int i;
		for(i=0;i<2521;i++){
			ll x = n+i;
			yes = true;
			while(x){
				int a = x%10;
				if(a && (n+i)%a != 0){
					yes=false;
					break;
				}
				x /= 10;
			}
			if(yes){
				break;
			}
		}
		cout << n+i <<endl;
	}
}