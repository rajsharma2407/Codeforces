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
	string str;
	cin >> str;
	bool ab = false;
	bool ba = false;
	int n = str.length();
	int both = 0;
	for(int i=0;i<str.length()-1;i++){
		if(str[i] == 'B' && str[i+1] == 'A'){
			if(i+2 < n && str[i+2] == 'B'){
				both++;
				i+=2;
			}else{
				i++;
				ba = true;
			}
		}else if(str[i] == 'A' && str[i+1] == 'B'){
			if(i+2 < n && str[i+2] == 'A'){
				both++;
				i+=2;
			}else{
				ab = true;
				i++;
			}
		}
	}
	if((ab & ba) || ((ab|ba) & both > 0) || both >= 2){
		cout << "YES\n";
	}else{
		cout << "NO\n";
	}
}