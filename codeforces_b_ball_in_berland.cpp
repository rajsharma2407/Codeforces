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
		int a, b, k;
		cin >> a >> b >> k;
		vector<int> A(k);
		vector<int> B(k);
		map<int, int> mapA;
		map<int, int> mapB;
		for(int i=0;i<k;i++){
			cin >> A[i];
			mapA[A[i]]++;
		}
		for(int i=0;i<k;i++){
			cin >> B[i];
			mapB[B[i]]++;
		}
		ll ans = 0;
		for(int i=0;i<k-1;i++){
			ans += k - (i+1);
			mapA[A[i]]--;
			mapB[B[i]]--;
			ans = ans - mapA[A[i]] - mapB[B[i]];
		}
		cout << ans << endl;
	}
}