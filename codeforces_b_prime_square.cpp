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

int n = 100;
int *arr = new int[n+15]();

void primeSeive(int x){
	arr[0] = arr[1] = 1;
	for(ll i=2; i<= x; i++){
		if(arr[i] == 0){
			for(ll j=i*i; j<=x; j+=i){
				arr[j] = 1;
			}
		}
	}
}

int main(){
	quickstart();
	primeSeive(n);
	testcase(t){
		int a;
		cin >> a;
		if(arr[a] == 0){
			for(int i=0;i<a;i++){
				for(int j=0; j<a; j++){
					cout << 1 << " ";
				}
				cout << endl;
			}
		}else{
			for(int i=0;i<a;i++){
				for(int j=0;j<a;j++){
					if((i == a-1 && j == 0) || j == i || j == i+1){
						cout << "1 ";
					}else{
						cout << "0 ";
					}
				}
				cout << endl;
			}
		}
	}
}