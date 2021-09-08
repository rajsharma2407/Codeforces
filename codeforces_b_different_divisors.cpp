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

int *primes = new int[10000000+5]();
void primeSeive(int x){
	for(ll i=2;i<=x;i++){
		if(primes[i] == 0){
			v.push_back(i);
			for(ll j=i*i;j<=x;j+=i){
				primes[j] = 1;
			}
		}
	}
}

int main(){
	quickstart();
	primeSeive(1000000);
	testcase(t){
		int d;
		cin >> d;
		ll no = 1;

			int j=d+1;
			while(primes[j]){
				j++;
			}
			no = j;
			ll no2 = j;
			j+=d;
			while(primes[j]){
				j++;
			}
			no2=j;
			cout << no*no2 <<endl;
	}
}