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
		cin >> n;
		char arr[n][n];
		int x1 = 0, y1 = 0;
		int x2 = 0, y2 = 0;
		int s = 0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin >> arr[i][j];
				if(arr[i][j] == '*' && s == 0){
					x1 = i;
					y1 = j;
					s++;
				}else if(arr[i][j] == '*' && s == 1){
					x2 = i;
					y2 = j;
				}
			}
		}
		int x3, x4;
		int y3, y4;
		if(x1 == x2){
			if(x1 +1 < n){
			x3 = x4 = x1+1;
			y3 = y2;
			y4 = y1;
			}else{
			x3 = x4 = x1-1;
			y3 = y2;
			y4 = y1;
			}
		}else if(y1 == y2){
			if(y1+1 < n){
			y3 = y4 = y1+1;
			x3 = x2;
			x4 = x1;
			}else{
			y3 = y4 = y1-1;
			x3 = x2;
			x4 = x1;
			}
		}else if(x1 == y2 && x2 == y1){
			x3 = min(x1, x2);
			y3 = min(y1, y2);
			x4 = max(x1, x2);
			y4 = max(y1, y2);
		}else{
			x3 = x1;
			y3 = y2;
			x4 = x2;
			y4 = y1;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if((i == x1 && j ==y1) || (i == x2 && j ==y2) || (i == x3 && j ==y3) || (i == x4 && j ==y4)){
					cout << "*";
				}else
					cout << ".";
			}
			cout << endl;
		}
	}
}