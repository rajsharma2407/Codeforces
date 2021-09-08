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
		int *arr = new int[26]();
		for(int i=0;i<str.length();i++){
			arr[str[i] - 'a']++;
		}
		int r = 0;
		int g = 0;
		int w = 0;
		for(int i=0;i<26;i++){
			if(arr[i] >= 2){
				r++;
				g++;
			}else if(arr[i] > 0){
				if(r < g){
					r++;
				}else{
					g++;
				}
			}
		}
		cout << min(r, g) << endl;
	}
	return 0;
}