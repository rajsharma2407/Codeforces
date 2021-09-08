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

string solve(int x){
	if(x%4 <= 1 || (4-x)	){
		return "YES";
	}else{
		return "NO";
	}
}

int main(){
	quickstart();
	testcase(t){
		int r, g, b, w;
		cin >> r >> g >> b >> w;
		int x = r%2+b%2+g%2+w%2;
		if(x%4 <= 1){
			cout << "YES\n";
			continue;
		}
		if(r*b*g == 0){
			cout << "NO\n";
		}else{
			x = 4-x;
			if(x%4 <= 1){
				cout << "YES\n";
			}else{
				cout << "NO\n";
			}
		}
	}
}