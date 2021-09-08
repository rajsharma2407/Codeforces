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
		int n, k;
		cin >> n >> k;
		string str;
		cin >> str;
		int count=0;
		int lastPT = -1; 
		int laaStar = str.length();
		for(int i=0;i<n;i++){
			if(str[i] == '*')
				laaStar = i;
			if(str[i] == '*' && count == 0){
				str[i] = 'x';
				lastPT = i;
				count += 1;
			}else if(i - lastPT == k){
				if(str[i] == '*'){
				count += 1;
					lastPT = i;
				}else if(str[laaStar] == '*'){
				count += 1;
					lastPT = laaStar;
				}
				str[lastPT] = 'x';
			}
		}
		if(str[laaStar] == '*')
			count += 1;
		cout << count << endl;
	}
}