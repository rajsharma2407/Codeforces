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

ll *prime = new ll[10000020]();
vector<int> pn;
void primeSeive(){
	prime[0] = prime[1] = 1;
	for(int i=2;i<=sqrt(1e9);i++){
		if(!prime[i]){
			pn.push_back(i);
			for(int j=i*i;j<=10000000;j+=i){
				prime[j] = 1;
			}
		}
	}
}

int main(){
	quickstart();
	primeSeive();
	testcase(t){
		ll a, b, k;
		cin >> a >> b >> k;
		ll a1 = a;
		ll b1 = b;
		if(k == 1){
			if( (a%b == 0 || b%a == 0) && a != b){
				cout << "YES\n";
			}else{
				cout << "NO\n";
			}
		}else{
			ll moves = 0;
			int i=0;
			while(a > 1){
				if(i == pn.size()){
					moves += 1;
					break;
				}
				if(a%pn[i] == 0){
					while(a%pn[i] == 0){
						moves += 1;
						a /= pn[i];
					}
				}
				i++;
			}
			i=0;
			while(b > 1){
				if(i == pn.size()){
					moves += 1;
					break;
				}
				if(b%pn[i] == 0){
					while(b%pn[i] == 0){
						moves += 1;
						b /= pn[i];
					}
				}
				i++;
			}
			if(moves >= k){
				cout << "YES\n";
			}else{
				cout << "NO\n";
			}
		}
	}
}