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
		cin >> n;
		cin >> str;
		bool poss = false;
		string ans = "";
		for(int i=0;i<n;i++){
			if(str[i] == '1' || str[i] == '4' || str[i] == '6' || str[i] == '8' || str[i] == '9'){
				ans = str[i];
				poss = true;
				break;
			}
		}
		if(poss){
			cout << ans.length() << endl << ans << endl;
		}else{
			if(str.length() <= 2){
				cout << str.length() << endl << str << endl;
			}else{
				int ct2 = 0;
				int ct3=0;
				int ct5=0;
				int ct7=0;
				for(int i=0;i<str.length();i++){
					if(str[i] == '2'){
						if(i != 0){
							ans += str[0];
							ans += str[i];
							break;
						}
						ct2++;
					}else if(str[i] == '3'){
						ct3++;
						if(ct3 >= 2){
							ans = "33";
							break;
						}
					}else if(str[i] == '5'){
						if(i!=0){
							ans += str[0];
							ans += str[i]; 
							break;
						}
						ct5++;
					}else if(str[i] == '7'){
						if(ct2 >= 1){
							ans = "27";
							break;
						}
						if(ct5 >= 1){
							ans = "57";
							break;
						}
						ct7++;
						if(ct7 > 1){
							ans = "77";
							break;
						}
					}
				}
				cout << ans.length() << endl << ans << endl;
			}
		}
	}
	return 0;
}