#include<bits/stdc++.h>
#define ll long long
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
	ll n;
	cin >> n;
	if(n%2 == 0){
		if(n != 2)
			cout << 2 << endl;
		else
			cout << 1 << endl;
	}else{	
		bool prime = true;
		for(ll i=2;i<=sqrt(n);i++){
			if(n%i == 0){
				prime=false;
				break;	
			}
		}
		if(prime){
			cout << 1 << endl;
		}else{
			bool secondprime = true;
			n-=2;
			for(ll i=2;i<=sqrt(n);i++){
				if(n%i == 0){
					secondprime=false;
					break;
				}
			}
			if(secondprime)
				cout << 2 << endl;
			else
				cout << 3 << endl;
		}	
	}
	return 0;
}