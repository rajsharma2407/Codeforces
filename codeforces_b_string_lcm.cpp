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
		string str1, str2;
		cin >> str1 >> str2;
		int m = str1.length();
		int n = str2.length();
		int i=0;
		int j=0;
		bool ans = true;
		string temp = "";
		while(i != m || j != n){
			if(i == m)
				i=0;
			if(j == n)
				j=0;
			if(str1[i] != str2[j]){
				ans = false;
				break;
			}else{
				temp += str1[i];
			}
			i++;
			j++;
		}
		if(ans)
			cout << temp << endl;
		else
			cout << "-1\n";
	}
}