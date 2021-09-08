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
		int n, c0, c1, h;
		cin >> n >> c0 >> c1 >> h;
		string str;
		cin >> str;
		int count0 = 0 ;
		int count1 = 0 ;
		for(int i=0;i<n;i++)
			(str[i] == '0')?count0++:count1++;

		int min = count0*c0 + count1*c1;
		if((n*c0 + h*count1) < min)
			min = (n*c0 + h*count1);
		if((n*c1 + h*count0) < min)
			min = (n*c1 + h*count0);
		cout << min << endl;
	}
}