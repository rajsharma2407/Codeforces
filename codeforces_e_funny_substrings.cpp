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
		cin >> n;
		char ch;
		cin >> ch;
		string *str = new string[n];
		for(int i=0;i<n;i++){
			getline(cin , str[i]);
		}
		str[0] = ch + str[0];
		map<string, string> mp;
		string temp ="";
		for(int i=0;i<n;i++){
			string str1 = str[i];
			temp = "";
			int j=0;
			while(str1[j] != ' '){
				temp += str1[j];
				j++;
			}
			j++;
			string op;
			while(str1[j] != ' '){
				op += str1[j];
				j++;
			}
			j++;
			if(op == ":="){
				string val = "";
				while(str1[j] != ' ' && j < str1.length()){
					val += str1[j];
					j++;
				}
				mp[temp] = val;

			}else{
				string val1 = "";
				string val2 = "";
				while(str1[j] != ' ' && j < str1.length()){
					val1 += str1[j];
					j++;
				}
				j+=3;
				while(str1[j] != ' ' && j < str1.length()){
					val2 += str1[j];
					j++;
				}
				mp[temp] = (mp[val1] + mp[val2]);
				// cout << mp[temp] << endl;
			}

		}
		cout << mp[temp].length() << endl;
	}			
}