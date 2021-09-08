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
		string str;
		cin >> n >> str;
		map<char, int> mp;
		bool poss = true;
		mp[str[0]]=1;
		for(int i=1;i<n;i++){
			if(str[i-1] != str[i] && mp[str[i]]){
				poss=false;
				break;
			}else{
				mp[str[i]]=1;
			}
		}
		if(poss)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}