#include<bits/stdc++.h>
#define ll long long
#define testcase(t) ll t cin>>t; while(t--)
using namespace std;

void quickstart(){
	#ifndef ONLINE_JUDGE
		freopen("F:/c++/input.txt","r",stdin);
		freopen("F:/c++/output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
}

string solve(string str, int len, string no){
	if(no.length() == 3 || len == -1){
		if(no.length() >=1 && stoi(no)%8 == 0){
			if(stoi(no) == 0 && no.length() < 3){
				return "0";
			}else{	
				return str.substr(0, len+1) + no;	
			}
		}	
	return "";
		}else{
			if(no.length() == 0 && (str[len]-'0')%2 != 0){
				return solve(str, len-1, no);
			}else{
				string x = solve(str, len-1, str[len]+no);
				string y = solve(str, len-1, no);
				return (x.length() > y.length()? x: y);
			}
	}
}

int main(){
	quickstart();
	string str;
	cin >> str;
	string ans = solve(str, str.length()-1, "");
	if(ans.length()){
		cout << "YES\n" << ans << endl;
	}else{
		cout << "NO\n";
	}
}