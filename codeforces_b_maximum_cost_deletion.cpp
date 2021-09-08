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
			int n, a, b;
			cin >> n >> a >> b;
			string str;
			cin >> str;
			ll ans = (a+b)*n;
			ll ans1 = 0;
			ll ans2 = 0;
			int ones = 0;
			int zeros = 0;
			int len = n, len2 = n;
			for(int i=0;i<str.length();i++){
				if(str[i] == '0'){
					zeros++;
				}else{
					if(zeros > 0){
						len-=zeros;
						ans1 += a*zeros + b;
					}
					zeros=0;
				}

				if(str[i] == '1'){
					ones++;
				}else{
					if(ones > 0){
						len2-=ones;
						ans2 += a*ones + b;
					}
					ones=0;
				}
			}
			ans1 += a*len + b;
			ans2 += a*len2 + b;
			cout << max({ans, ans1, ans2}) << endl;
	}
}