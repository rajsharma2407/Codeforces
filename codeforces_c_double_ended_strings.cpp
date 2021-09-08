#include<bits/stdc++.h>
#define ll long long
#define testcase(t) ll t; cin>>t; while(t--)
using namespace std;

void quickstart(){
	#ifndef ONLINE_JUDGE
		freopen("F:/c++/23-01-2021/CodeForces/input.txt","r",stdin);
		freopen("F:/c++/23-01-2021/CodeForces/output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
}

int main(){
	quickstart();
	testcase(t){
		string str1, str2;
		cin >> str1 >> str2;
		int n = str1.length();
		int m = str2.length();
		int len = 0;
		int ans = 0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
			int x = i;
			int y=j;
			len = 0;
				while(x<n && y<m && str1[x] == str2[y]){
					len++;
					x++;
					y++;
				}
				ans = max(ans, len);
			}
		}
		cout << m+n - ans*2 << endl;
	}
}