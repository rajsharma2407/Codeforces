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
	int n;
	cin >> n;
	vector<ll> arr(n+1);
	arr[0]=0;
	arr[1]=1;
	for(int i=2;i<=n;i++){
		arr[i] = arr[i-1] + 4*(i-1);
	}
	cout << arr[n] << endl;
	return 0;
}