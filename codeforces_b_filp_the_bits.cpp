#include<bits/stdc++.h>
#define ll long long
#define mp(a, b) make_pair(a, b)
#define pb(x) push_back(x)
#define testcase(t) ll t; cin>>t; while(t--)
using namespace std;

void quickstart(){
	#ifndef ONLINE_JUDGE
		freopen("F:/c++/input.txt","r",stdin);
		freopen("F:/c++/output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
}

void solve() {
	int n;
	string str;
	string cmp;
	cin >> n >> str >> cmp ;	
	vector<int> cnt0(n);
	vector<int> cnt1(n);
	int c0 = 0;
	int c1 = 0;
	for(int i=0;i<n;i++){
		if(str[i] == '0')
			c0++;
		else
			c1++;
		cnt0[i] = c0;
		cnt1[i] = c1;
	}
	int count = 0;
	bool poss = true;
	for(int i=n-1; i>=0; i--){
		if(count%2 != 0){
			str[i] = (char)((1 - ((int)str[i] - 48)) + 48);
		}
		if(str[i] != cmp[i]){
			count += 1;	
			if(cnt0[i] != cnt1[i]){
				poss=false;
				break;
			}
		}
	}
	if(poss)
		cout << "YES\n";
	else
		cout << "NO\n";
}

int main(){
	quickstart();
	testcase(t){
		solve();
	}
}