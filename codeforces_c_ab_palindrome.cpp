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
		int a, b;
		cin >> a >> b;
		string str;
		cin >> str;
		bool poss = false;
		int n = str.length();
		if(a+b == str.length()){
			poss=true;
			for(int i=0;i<n;i++){
				if(str[i] == '0')
					a--;
				if(str[i] == '1')
					b--;
			}
			for(int i=0;i<n;i++){
				if(str[i] == '?' && str[n-1-i] == '0'){
					str[i] = '0';
					a -= 1;
				}
				if(str[i] == '?' && str[n-1-i] == '1'){
					str[i] = '1';
					b -= 1;
				}
			}
			for(int i=0;i<n;i++){
				if(str[i] == '?' && str[n-1-i] == '?'){
					if(i == n-1-i){
						if(a%2 != 0){
							str[i] = '0';
							a--;
						}
						if(b%2 != 0){
							str[i] = '1';
							b--;
						}
					}else if(a >= 2){
						str[i] = str[n-1-i] = '0';
						a-=2;
					}else if(b >= 2){
						str[i] = str[n-1-i] = '1';
						b-=2;
					}
				}
			}
			for(int i=0;i<n;i++){
				if(str[i] != str[n-1-i] || str[i] == '?'){
					poss=false;
					break;
				}else{
					poss = true;
				}
			}
			if(poss && a == 0 && b == 0)
				cout << str << endl;
			else
				cout << "-1\n";
		}else{

			cout << "-1\n";
		}
	}
}