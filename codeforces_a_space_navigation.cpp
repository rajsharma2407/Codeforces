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
		int x, y;
		cin>>x>>y;
		string str;
		cin>>str;
		int l=0, r=0, u=0, d=0;
		for(int i=0;i<str.length();i++){
			if(str[i] == 'L')
				l++;
			else if (str[i] == 'R')
				r++;
			else if (str[i] == 'D')
				d++;
			else if (str[i] == 'U')
				u++;
		}
		if(x >= 0 && r >= x){
			if(y >=0 && u >= y){
				cout<<"YES\n";
			}else if(y<0 && (-1*y) <= d){
				cout<<"YES\n";
			}else{
				cout<<"NO\n";
			}
		}else if(x<0 && (-1*x) <= l){
			if(y >=0 && u >= y){
				cout<<"YES\n";
			}else if(y<0 && (-1*y) <= d){
				cout<<"YES\n";
			}else{
				cout<<"NO\n";
			}
		}else{
			cout<<"NO\n";
		}
	}
}