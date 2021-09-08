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
	int n = str.length();
	int *arr = new int[3]();
	for(int i=0;i<n;i++){
		if((int)str[i] > 48 && (int)str[i]<=51){
			arr[(int)str[i]-49]++;
		}
	}
	int val = arr[0]+arr[1]+arr[2];
	for(int i=0;i<val;i++){
		if(arr[0]){
			arr[0]--;
			if(i != val-1)
				cout << 1 <<'+';
			else
				cout << 1;
		}else if(arr[1]){
			arr[1]--;
			if(i != val-1)
				cout << 2 << '+';
			else
				cout << 2;
		}else{
			arr[2]--;
			if(val-1 != i)
				cout << 3 << '+';
			else
				cout << 3;
		}
	}
}