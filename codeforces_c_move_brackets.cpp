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
		stack<char> stk;
		for(int i=0;i<n;i++){
			if(str[i] == ')'){
				if(!stk.empty() && stk.top() == '('){
					stk.pop();
				}else{
					stk.push(str[i]);
				}
			}else{
				stk.push(str[i]);
			}
		}
		cout << stk.size()/2 << endl;
	}
}