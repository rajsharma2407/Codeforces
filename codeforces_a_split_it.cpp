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
	int n, k;
	string str;
	cin >> n >> k;
	cin >> str;
	int flag = 0;
	for(int i=0;i<k;i++){
		if(str[i] != str[n-1-i]){
			flag=1;
			break;
		}
	}
	if(flag || k == ceil((float)n/2))
		cout << "NO\n";
	else
		cout << "YES\n";
	}
}