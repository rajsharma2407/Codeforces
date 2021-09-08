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

int gcd(int a, int b){
	if(a == 0)
		return b;
	else
		return gcd(b%a, a);
}

int main(){
	quickstart();
	testcase(t){
		ll n;
		cin >> n;
		int sum = 0;
		ll x;
		x = n;
		while(x){
			sum += x%10;
			x /= 10;
		}
		while(gcd(sum, n) == 1){
			n++;
			sum++;
			if(n%10 == 0){		
				x = n;
				sum=0;
				while(x){
					sum += x%10;
					x /= 10;
				}		
			}
		}
		cout << n << endl;
	}
}