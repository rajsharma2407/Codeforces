#include<bits/stdc++.h>
#define ll long long
#define testcase(t) ll t; cin>>t; while(t--)
#define input(n) for(int i=0;i<n;i++)
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
	int n;
	cin >> n;
	int *a = new int[n];
	int *b = new int[n];
	int *c = new int[n];
	input(n){
		cin >> a[i];
	}
	input(n){
		cin >> b[i];
	}
	input(n){
		cin >> c[i];
	}
	int prev;
	for(int i=0;i<n;i++){
		if(i == 0){
			prev = a[i];
			cout << a[i] << " ";
		}else{
			if(i == n-1){
				if(a[i] != prev && a[i] != a[0]){
					cout << a[i] << endl;
				}else if(b[i] != prev && b[i] != a[0]){
					cout << b[i] << endl;
				}else{
					cout << c[i] << endl;
				}
			}else{
			if(a[i] != prev){
				cout << a[i] << " ";
				prev = a[i];
			}else if(prev != b[i]){
				cout << b[i] << " ";
				prev = b[i];
			}else if(prev != c[i]){
				cout << c[i] << " ";
				prev = c[i];
			}
			}
		}
	}
	}
}