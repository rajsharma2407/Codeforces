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
		string str;
		cin >> str;
		int l=0;
		int r = str.length()-1;
		bool flag = true;
		int val = r;
		while(l<=r){
			if(str[l] == (char)(val+97)){
				l++;
			}else if(str[r] == (char)(val+97)){
				r--;
			}else{
				flag=false;
				break;
			}
			val--;
		}
		if(flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}