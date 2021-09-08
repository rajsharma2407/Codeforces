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
		string str;
		cin >> str;
		int open = 0;
		int close = 0;
		int choose = 0;
		int n = str.length();
		int flag = 0;
		if(str[0] != str[n-1]){
			for(int i=0; i<n; i++){
				if(str[i] == str[0])
					open += 1;
				else if(str[i] == str[n-1])
					close += 1;
				else
					choose += 1;
				if(close > open && choose == 0){
					flag = 1;
					break;
				}
			}
			if(!flag){
				char op = str[0];
				char cl = str[n-1];
				char ch;
				if(open > close){
					ch = cl;
				}else if(close > open){
					ch = op;
				}else if(close == open && choose == 0){
					cout << "YES\n";
					continue;
				}else{
					cout << "NO\n";
					continue;
				}
				open = 0;
				close = 0;
				for(int i=0;i<n;i++){
					if(str[i] == op){
						open++;
					}else if(str[i] == cl){
						close++;
					}else{
						if(op == ch){
							open++;
						}else{
							close++;
						}
					}
					if(close > open){
						flag=1;
						break;
					}
				}
				if(flag || open != close){
					cout << "NO\n";
					continue;
				}else{

				open = 0;
				close = 0;
				for(int i=n-1;i>=0;i--){
					if(str[i] == op){
						open++;
					}else if(str[i] == cl){
						close++;
					}else{
						if(op == ch){
							open++;
						}else{
							close++;
						}
					}
					if(open > close){
						flag=1;
						break;
					}
				}
				if(flag){
					cout << "NO\n";
					continue;
				}else{
					cout << "YES\n";
					continue;
				}
				}
			}else{
				cout << "NO\n";
				continue;
			}
		}else{
			cout << "NO\n";
			continue;
		}
	}
}