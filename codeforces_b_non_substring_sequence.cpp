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
		int n, q;
		string str;
		cin>>n >> q;
		cin>> str;
		int l, r;
		while(q--){
		cin >> l >> r;
		char x, y;
		x = l;
		y = r;
		int count = 0;
		while(l != 1){
			if(str[l-2] == str[x-1]){
				count++;
				break;
			}
			l--;
		}
		int z = str.length();
		while(count == 0 && r != z){
			if(str[r] == str[y-1]){
				count++;
			}
			r++;
		} 
		if(count) cout << "YES\n";
		else cout << "NO\n";
		}
	}
}