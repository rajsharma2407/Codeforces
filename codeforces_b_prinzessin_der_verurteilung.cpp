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
		int *arr = new int[26]();
		for(int i=0;i<n;i++){
			arr[str[i]-'a']++;
		}
		char ch = '0';
		for(int i=0;i<26;i++){
			if(arr[i] == 0){
				ch = (char)('a'+i);
				break;
			}
		}
		if(ch != '0'){
			cout << ch << endl;
			continue;
		}
		string temp ="a";
		int i=0;
		while(i >= 0){
			temp +=
		}
	}
}