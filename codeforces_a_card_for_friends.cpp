#include<bits/stdc++.h>
using namespace std;

void inputs(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		ios_base::sync_with_stdio(0);
}

int main(){
	inputs();
	int t;
	cin>>t;
	while(t--){
		int w, h, n, countw=0, counth=0;
		cin>>w>>h>>n;
		if(n == 1){
			cout<<"YES\n";
		}else{
			while(w%2 == 0){
				w/=2;
				countw++;
			}

			while(h%2 == 0){
				h/=2;
				counth++;
			}
			// cout<<counth<<" "<<countw<<endl;
			if(pow(2,countw)*pow(2,counth) >= n){
				cout<<"YES\n";
			}else
				cout<<"NO\n";
		}
	}
	return 0;
}