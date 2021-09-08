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
		int q, d;
		cin >> q >> d;
		int x;
		bool possible = false;
		int *arr = new int[q];
		for(int i=0;i<q;i++)
			cin >> arr[i];
		for(int i=0;i<q;i++)
		{
			x = arr[i];
			possible = false;
			if(x >= d*10 || d == 1){
				cout << "YES\n";
				continue;
			}else{
				while(x > 0){
					if(x%10 == d){
						possible = true;
						break;
					}
					x-=d;
				}
				if(possible)
					cout << "YES\n";
				else
					cout << "NO\n";
			}
		}
	}
}