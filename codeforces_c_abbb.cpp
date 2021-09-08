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
		string str;
		cin >> str;
		int top = -1;
		int n = str.length();
		char *arr = new char[n];
		int count = n;
		for(int i=0;i<n;i++){
			top++;
			arr[top]=str[i];
			if(top > 0 && arr[top] == 'B'){
				top -= 2;
				count -= 2;
			}
		}
		cout << count << endl;
	}
}