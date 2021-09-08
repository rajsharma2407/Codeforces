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
		int n;
		cin >> n;
		int x = n;
		int count = 0;
		int ans = 0;
		while(n > 9){
			ans += 9;
			n/=10;
			count++;
		}
		ll no = 0;
		while(count+1){
			no = no*10 + n;
			count--;
		}
		ans += n;
		if(x < no)
			ans -= 1;
		cout << ans << endl;
	}
}