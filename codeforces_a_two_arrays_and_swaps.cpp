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
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		vector<int> b(n);
		for(int i=0;i<n;i++)
			cin >> a[i];
		for(int i=0;i<n;i++)
			cin >> b[i];
		sort(a.begin(), a.end());
		sort(b.rbegin(), b.rend());
		int swaps = 0;
		ll sum = 0;
		for(int i=0;i<k;i++){
			if(a[i] < b[i]){
				swaps++;
				sum+=b[i];
			}else
				break;
		}
		for(int i=n-1;i>=swaps;i--){
			sum+=a[i];
		}
		cout << sum << endl;
	}
}