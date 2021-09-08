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
		int xa, ya, xb, yb, xf, yf;
		cin >> xa >> ya >> xb >> yb >> xf >> yf;
		int ans = 0;
		if(xa == xb && xb == xf){
			if((yf < ya && yf < yb) || (yf > ya && yf > yb)){

			}else{
				ans+=2;
			}
		}else if(ya == yb && yb == yf){
			if((xf < xa && xf < xb) || (xf > xa && xf > xb)){

			}else{
				ans += 2;
			}
		}
		cout << abs(xa-xb)+abs(ya-yb)+ans << endl;
	}
}