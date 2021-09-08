// #include<bits/stdc++.h>
// #define ll long long
// #define testcase(t) ll t; cin>>t; while(t--)
// using namespace std;

// void quickstart(){
// 	#ifndef ONLINE_JUDGE
// 		freopen("input.txt","r",stdin);
// 		freopen("output.txt","w",stdout);
// 	#endif
// 	ios_base::sync_with_stdio(0);
// }

// int main(){
// 	quickstart();
// 	testcase(t){
// 	int n, m;
// 	cin >> n;
// 	int *a = new int[n];
// 	for(int i=0;i<n;i++)
// 		cin >> a[i];
// 	cin >> m;
// 	int *b = new int[m];
// 	for(int i=0;i<m;i++)
// 		cin >> b[i];

// 	int best = 0, sum = 0;
// 	int sum1 = 0, currSum = 0;
// 	for(int i=0;i<n;i++){
// 		currSum += a[i];
// 		sum1=max(currSum, sum1);
// 	}
// 	currSum=0;
// 	int sum2=0;
// 	for(int i=0;i<m;i++){
// 		currSum += b[i];
// 		sum2=max(sum2, currSum);
// 	}
// 	cout << sum1+sum2 << "\n";
// 	}
// }
//
#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> r(n);
	for(int i=0;i<n;i++)
		cin >> r[i];
	int m;
	cin >> m;
	vector<int> b(m);
	for(int i=0;i<m;i++)
		cin >> b[i];
	partial_sum(r.begin(), r.end(), r.begin());
	partial_sum(b.begin(), b.end(), b.begin());
	cout << max(0, *max_element(r.begin(), r.end())) + max(0, *max_element(b.begin(), b.end())) << '\n';
}

int main() {
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout );
	int t;
	cin >> t;
	while (t--) solve();
}