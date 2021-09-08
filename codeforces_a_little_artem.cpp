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
		int n, m;
		cin >> n >> m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(i == 0 && j == 0)
					cout << "W";
				else
					cout << "B";
			}
		cout << endl;
		}
	}
}