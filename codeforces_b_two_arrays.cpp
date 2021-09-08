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

int main(){
	quickstart();
	testcase(t){
		int n, T;
		cin >> n >> T;
		vector<int> v(n);
		int count=0;
		for(int i=0;i<n;i++)
			cin >> v[i];
		if(T%2 != 0){
			for(int i=0;i<n;i++){
				if(v[i]%2 == 0)
					cout << "0 ";
				else
					cout << "1 ";
			}
		}else{
			for(int i=0;i<n;i++){
				if(v[i] < T/2){
					cout << "0 ";
				}else if(v[i] > T/2){
					cout << "1 ";
				}else{
					if(count%2 == 0)
						cout << "0 ";
					else
						cout << "1 ";
					count++;
				}
			}
		}
		cout << endl;
	}
}