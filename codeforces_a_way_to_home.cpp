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
	int n, d;
	cin >> n >> d;
	string str;
	cin >> str;
	int ans = 0;
	for(int i=n-2;i>=0;i--){
		int k = d;
		int prev = -1;
		while(k>0 && i>=0){
			if(str[i] == '1'){
				prev = i;
			}
			k--;
			i--;
		}
		ans++;
		cout << prev << endl;
		if(prev == -1){
			ans = -1;
			break;
		}
		if(i == 0)
			break;
		i=prev;
	}
	cout << ans << endl;
}